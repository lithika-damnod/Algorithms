#pragma once 

#include <iostream> 
#include <vector>
using namespace std; 


int lowerBound(vector<int> arr, int size){
    
    int sum = 0; 

    // calculate sum of elements in the array
    for(int i=0; i<arr.size(); i++){
        sum += arr[i]; 
    }
    
    // calculate lowerbound
    auto lowerbound = sum / size; 
    if(sum % size == 0){
        return lowerbound; 
    }
    else{
        return lowerbound+1; 
    }
}

vector<vector<int>> firstBin(vector<int> arr, int size){
    
    vector<vector<int>> retArr; 
    
    for(int i=0; i<arr.size(); i++){
        
    }

    return retArr; 
}