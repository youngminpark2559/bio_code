
#### Introduction
- Data page: https://www.kaggle.com/uciml/pima-indians-diabetes-database

================================================================================
#### Explanation on data
- Pregnancies<br/>
- Glucose<br/>
- BloodPressure<br/>
- SkinThickness<br/>
- Insulin<br/>
- BMI<br/>
- DiabetesPedigreeFunction<br/>
- Age<br/>
- Outcome<br/>

================================================================================
#### Libraries
- Python 3.6
- PyTorch 1.0.1.post2
- CUDA V10.0.130
- CuDNN v7.4
- Scikit-Learn
- And others which you can install whenever you run into unmet-dependencies

================================================================================
#### Overview of entire dataset<br/>
```
       Pregnancies     Glucose  BloodPressure  SkinThickness     Insulin  \
count  768.000000   768.000000  768.000000     768.000000     768.000000   
mean   3.845052     120.894531  69.105469      20.536458      79.799479    
std    3.369578     31.972618   19.355807      15.952218      115.244002   
min    0.000000     0.000000    0.000000       0.000000       0.000000     
25%    1.000000     99.000000   62.000000      0.000000       0.000000     
50%    3.000000     117.000000  72.000000      23.000000      30.500000    
75%    6.000000     140.250000  80.000000      32.000000      127.250000   
max    17.000000    199.000000  122.000000     99.000000      846.000000   

              BMI  DiabetesPedigreeFunction         Age     Outcome  
count  768.000000  768.000000                768.000000  768.000000  
mean   31.992578   0.471876                  33.240885   0.348958    
std    7.884160    0.331329                  11.760232   0.476951    
min    0.000000    0.078000                  21.000000   0.000000    
25%    27.300000   0.243750                  24.000000   0.000000    
50%    32.000000   0.372500                  29.000000   0.000000    
75%    36.600000   0.626250                  41.000000   1.000000    
max    67.100000   2.420000                  81.000000   1.000000    
```

================================================================================
#### Overview of entire dataset<br/>
```
Pregnancies                 768 non-null int64
Glucose                     768 non-null int64
BloodPressure               768 non-null int64
SkinThickness               768 non-null int64
Insulin                     768 non-null int64
BMI                         768 non-null float64
DiabetesPedigreeFunction    768 non-null float64
Age                         768 non-null int64
Outcome                     768 non-null int64
```

1.. Meaning<br/>
..(1) 768 number of data on each feature<br/>
..(2) There is no NaN in entire data<br/>
..(3) Datatype is int64 or float64<br/>

================================================================================
#### Visualize train data  
1.. See probability distribution of each feature data<br/>
<img src="https://raw.githubusercontent.com/youngminpark2559/bio_code/master/My_code/V_0001/prj_root/img_out/Analyze_train_data/2019_05_09_20%3A52%3A45.png" alt="drawing" width="1000" height="1000"/><br/>
..(1) Meaning: there are nagative and positive relationships between factors<br/>
....1) Large variance: Insulin, Glucose<br/>
....2) Small variance: Outcome, Pregnancies<br/><br/>

2.. See correlations on features<br/>
<img src="https://raw.githubusercontent.com/youngminpark2559/bio_code/master/My_code/V_0001/prj_root/img_out/Analyze_train_data/2019_05_09_21%3A27%3A16.png" alt="drawing" width="1000" height="1000"/><br/>
..(1) Meaning: there are nagative and positive relationships between factors<br/>
....1) Negative correlation: Insulin-Pregnancies, SkinThickness-Pregnancies, Age-SkinThickness,<br/>
....2) Positive correlation: Age-Pregnancies, BMI-SkinThickness, Insluin-SkinThickness, Insulin-Glucose<br/>



