import torch
from torch.autograd import Variable
from torch.autograd import Function
from torchvision import models
from torchvision import utils
import cv2
import sys
import numpy as np
import pandas as pd
pd.set_option('display.max_colwidth',-1);pd.set_option('display.max_columns',None)
import argparse
import os
import copy
import matplotlib.pyplot as plt
import seaborn as sns;sns.set()
from scipy.stats import norm

import plotly.offline as py
import plotly.graph_objs as go
import plotly.tools as tls
from collections import Counter
from scipy.misc import imread
from sklearn.feature_extraction.text import TfidfVectorizer, CountVectorizer
from sklearn.decomposition import NMF, LatentDirichletAllocation
from matplotlib import pyplot as plt
# %matplotlib inline

# ================================================================================
from src.utils import utils_image as utils_image
from src.utils import utils_common as utils_common

# ================================================================================
train_data="/mnt/1T-5e7/mycodehtml/bio_health/Diabetes/pima-indians-diabetes-database/Data/diabetes.csv"

# ================================================================================
def load_csv_file(path):
  loaded_csv=pd.read_csv(path,encoding='utf8')
  return loaded_csv

def check_nan(df):
  ret=df.isna()
  print("ret",ret)
  #      PatientID   Resp  PR Seq  RT Seq  VL-t0  CD4-t0
  # 0    False      False  False   False   False  False 
  # 1    False      False  False   False   False  False 

  # ================================================================================
  sum_nan=ret.sum()
  print("sum_nan",sum_nan)
  # PatientID    0 
  # Resp         0 
  # PR Seq       80
  # RT Seq       0 
  # VL-t0        0 
  # CD4-t0       0 

def analyze_data(args):
  loaded_csv=load_csv_file(train_data)
  # print("loaded_csv",loaded_csv.shape)
  # (768, 9)

  # print("loaded_csv",loaded_csv.columns)
  # ['Pregnancies', 'Glucose', 'BloodPressure', 'SkinThickness', 'Insulin', 'BMI', 'DiabetesPedigreeFunction', 'Age', 'Outcome']

  # print("loaded_csv",loaded_csv.head(2))
  #    Pregnancies  Glucose  BloodPressure  SkinThickness  Insulin   BMI  \
  # 0  6            148      72             35             0        33.6   
  # 1  1            85       66             29             0        26.6   

  #    DiabetesPedigreeFunction  Age  Outcome  
  # 0  0.627                     50   1        
  # 1  0.351                     31   0        

  # ================================================================================
  # print("loaded_csv.describe()",loaded_csv.describe())
  #        Pregnancies     Glucose  BloodPressure  SkinThickness     Insulin  \
  # count  768.000000   768.000000  768.000000     768.000000     768.000000   
  # mean   3.845052     120.894531  69.105469      20.536458      79.799479    
  # std    3.369578     31.972618   19.355807      15.952218      115.244002   
  # min    0.000000     0.000000    0.000000       0.000000       0.000000     
  # 25%    1.000000     99.000000   62.000000      0.000000       0.000000     
  # 50%    3.000000     117.000000  72.000000      23.000000      30.500000    
  # 75%    6.000000     140.250000  80.000000      32.000000      127.250000   
  # max    17.000000    199.000000  122.000000     99.000000      846.000000   

  #               BMI  DiabetesPedigreeFunction         Age     Outcome  
  # count  768.000000  768.000000                768.000000  768.000000  
  # mean   31.992578   0.471876                  33.240885   0.348958    
  # std    7.884160    0.331329                  11.760232   0.476951    
  # min    0.000000    0.078000                  21.000000   0.000000    
  # 25%    27.300000   0.243750                  24.000000   0.000000    
  # 50%    32.000000   0.372500                  29.000000   0.000000    
  # 75%    36.600000   0.626250                  41.000000   1.000000    
  # max    67.100000   2.420000                  81.000000   1.000000    

  # ================================================================================
  means=loaded_csv.describe().iloc[1,:]
  stds=loaded_csv.describe().iloc[2,:]
  # print("means",means)
  # Pregnancies                 3.845052  
  # Glucose                     120.894531
  # BloodPressure               69.105469 
  # SkinThickness               20.536458 
  # Insulin                     79.799479 
  # BMI                         31.992578 
  # DiabetesPedigreeFunction    0.471876  
  # Age                         33.240885 
  # Outcome                     0.348958  

  # print("stds",stds)
  # Pregnancies                 3.369578  
  # Glucose                     31.972618 
  # BloodPressure               19.355807 
  # SkinThickness               15.952218 
  # Insulin                     115.244002
  # BMI                         7.884160  
  # DiabetesPedigreeFunction    0.331329  
  # Age                         11.760232 
  # Outcome                     0.476951  

  params=list(zip(means,stds))
  # print("params",params)
  # [(3.8450520833333335, 3.3695780626988623), (120.89453125, 31.97261819513622), (69.10546875, 19.355807170644777), (20.536458333333332, 15.952217567727677), (79.79947916666667, 115.24400235133837), (31.992578124999977, 7.8841603203754405), (0.4718763020833327, 0.33132859501277484), (33.240885416666664, 11.76023154067868), (0.3489583333333333, 0.4769513772427971)]

  # print("",len(params))
  # 9

  nb_h=len(params)/3
  nb_w=len(params)/3

  
  features=['Pregnancies', 'Glucose', 'BloodPressure', 'SkinThickness', 'Insulin', 'BMI', 'DiabetesPedigreeFunction', 'Age', 'Outcome']
  for i,one_feat in enumerate(params):
    # print("one_feat",one_feat)
    # (3.8450520833333335, 3.3695780626988623)

    x_values=np.arange(-1000,1000,0.001)
    plt.subplot(nb_h,nb_w,i+1)
    plt.title(features[i]+"/mean: "+str(int(one_feat[0]))+"/std: "+str(int(one_feat[1])))
    plt.plot(x_values,norm.pdf(x_values,one_feat[0],one_feat[1]))
  # plt.show()
  # /home/young/Pictures/2019_05_09_20:38:42.png
  

  

  
