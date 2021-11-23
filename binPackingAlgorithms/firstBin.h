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
    if(sum % size){
        return lowerbound; 
    }
    else{
        return lowerbound+1; 
    }
}
