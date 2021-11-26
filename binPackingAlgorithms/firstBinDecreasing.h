#pragma once 

#include <iostream> 
#include <vector> 
#include "firstBin.h" // for firstBin()
#include "../sortingAlgorithms/bubbleSort.h" // for sorting into descending order

/*
    firstBinDecreasing(arr, size)
    arr: vector<vector<int>> (two dimensional vector)
    size: int
    returns: vector<vector<int>> (two dimensional vector)
*/

vector<vector<int>> firstBinDecreasing(vector<int> arr, int size){
    
    // sort the array into descending order
    vector<int> descArr = bubbleSort(arr, 1);

    // applying firstBin algorithm "firstBin()"
    vector<vector<int>> output = firstBin(descArr, size); 
    
    return output; 
}