# btrees_exp

An experiment on b_trees efficiency with respect to node size  
It uses the C++-BTree STL-like template from Google Open Source (Apache license 2.0)  
A valid installation of g++ is required to run it.

####Usage:
Compile bt_test.cc using g++  
./bt_test \<maximum node size\> \<nOps\> \<reps\>

####Tests performed:
For each node size, inserts, searches and deletes nOps random keys, prints to stdout in a CSV format the time (in seconds) needed to perform each type of operation ("reps" times for each node size). Example:  
```
Number of operations: 10000
      M,    Insert,      Find,    Delete,  Node size
     16,   0.011486,    0.007179,    0.007543,         128
     16,   0.009945,    0.007274,    0.006574,         128
     17,   0.010488,     0.00729,    0.007061,         136
     17,   0.009838,    0.007782,     0.00678,         136
     18,   0.010233,    0.007068,    0.006984,         144
     18,   0.009798,    0.007329,    0.006356,         144
     19,   0.010459,    0.007096,    0.007014,         152
     19,    0.00979,     0.00809,    0.006564,         152
     20,   0.010069,    0.007354,    0.007456,         160
     20,   0.010381,    0.007183,    0.006962,         160
```

Part of the ADS-Advanced Data Structures course  
Master in Innovation and Research in Informatics  
Facultat d'Informatica de Barcelona  

