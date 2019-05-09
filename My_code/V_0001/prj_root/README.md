
#### Introduction
- Page: https://www.kaggle.com/c/hivprogression/
- Problem: predict (or classify) 0 or 1 against given HIV related feature data
- To do that, you need to train classifier by given train dataset

================================================================================
#### Explanation on data
- Column-1: Patient's ID
- Column-2: Response status to the treatment ("1": improved (got better), "0": otherwise)
- Column-3: DNA sequence to create protease
- Column-4: DNA sequence to create reverse transciptase
- Column-5: "viral load severity" at the beginning of therapy (log-10 units)
- Column-6: CD4 (cluster structures on the surface of immune cells such as T helper cells, monocytes, macrophages) count at the beginning of therapy

================================================================================
#### Libraries
- Python 3.6
- PyTorch 1.0.1.post2
- CUDA V10.0.130
- CuDNN v7.4
- Scikit-Learn
- And others which you can install whenever you run into unmet-dependencies

================================================================================
#### Visualize train data  
1.. See probability distribution of each feature data<br/>
<img src="https://raw.githubusercontent.com/youngminpark2559/bio_code/master/My_code/V_0001/prj_root/img_out/Analyze_train_data/2019_05_09_20%3A52%3A45.png" alt="drawing" width="1000" height="1000"/><br/>
..(1) Meaning: there are nagative and positive relationships between factors.<br/>
....1) Large variance: Insulin, Glucose
....2) Small variance: Outcome, Pregnancies,
