# btrees_exp

An experiment on b_trees efficiency with respect to node size  
It uses the C++-BTree STL-like template from Google Open Source (Apache license 2.0)

####Usage:
Compile bt_test.cc
run bt_test \<maximum node size\> \<nOps\>

####Tests performed:
For each node size, inserts, searches and deletes nOps random keys, prints to stdout in a CSV format the time (in seconds) needed to perform each type of operation. Example:  
```
Number of operations: 100000
      M,    Insert,      Find,    Delete,
     16,   0.119749,    0.096996,    0.090686, 
     32,   0.121291,     0.08973,    0.084707, 
     64,   0.117042,    0.081643,    0.078927, 
    128,   0.133296,    0.086886,    0.095225, 
    256,    0.18213,    0.110826,    0.104219, 
    512,   0.261126,    0.153387,    0.152216, 
   1024,   0.421429,    0.216958,    0.208622, 
```

Part of the ADS-Advanced Data Structures course  
Master in Innovation and Research in Informatics  
Facultat d'Informatica de Barcelona  

