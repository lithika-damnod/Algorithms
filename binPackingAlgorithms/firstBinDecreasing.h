#pragma once 

#include <iostream> 
#include <vector> 
#include "firstBin.h" // for firstBin()
#include "../sortingAlgorithms/bubbleSort.h" // for sorting into DESCENDING ORDER



vector<vector<int>> firstBinDecreasing(vector<int> arr, int size){
    
    vector<int> descArr = bubbleSort(arr, 1); 
    vector<vector<int>> output = firstBin(descArr, size); 
    return output; 
}