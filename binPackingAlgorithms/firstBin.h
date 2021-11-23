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

vector<vector<int>> firstBin(vector<int> arr, int size){
    vector<vector<int>> output; 
    for(int i=0; i<arr.size(); i++){
        int indexUp = i; 
        int sum; 
        vector<int> push; 
        while(sum < size){
            sum += arr[indexUp]; 
            push.push_back(arr[indexUp]); 
            indexUp++; 
        }
        output.push_back(push); 
        push.clear(); 
        i = indexUp ;  
        sum = 0; 
    }

    return output; 
}