#pragma once 

#include <iostream> 
#include <vector>
using namespace std; 


/*
    lowerBound(arr, size)
    arr: vector<vector<int>> (two dimensional vector)
    size: int
    returns: vector<vector<int>> (two dimensional vector)
*/

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


/*
    firstBin(arr, size)
    arr: vector<vector<int>> (two dimensional vector)
    size: int
    returns: vector<vector<int>> (two dimensional vector)
*/

vector<vector<int>> firstBin(vector<int> arr, int size){

    vector<vector<int>> ret2D;

    for(int i=0; i<arr.size(); i++){
        
        int sum = 0; 
        int x = i;  
        vector<int> sumArr; 
         
        while(sum < size){
            
            sum += arr[x];  
            
            // stop when the sum is greater than size
            if(sum > size) 
                break; 
 
            // if the index is higher than the size of the array, break the while loop
            if(x > arr.size() - 1){ 
                break; 
            }
            sumArr.push_back(arr[x]);
            x++;    
        } 
  
        ret2D.push_back(sumArr);  
        sum = 0; 
        i = x - 1; 
    }

    return ret2D; 
}