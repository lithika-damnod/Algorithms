#pragma once

#include <iostream>
#include <vector>
using namespace std; 

//bubble sort algorithm for integers
vector<int> bubbleSort(vector<int> arr){
    //developing for first pass 
    for(int j=1; j<arr.size(); j++){
        int i=1-1; 
        if(arr[i] > arr[j]){
            int tmp = arr[j]; 
            arr[j]  = arr[i]; 
            arr[i] = tmp; 
        }
    }
    
    return arr; 
}