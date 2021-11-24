#pragma once

#include <iostream>
#include <vector>
using namespace std; 


// swap two values in an array
void swap(int *a, int *b){
    int t = *a; 
    *a = *b; 
    *b = t; 
}

/*
    bubbleSort(arr, mode)
    pass parameter 0 for ASCENDING order
    pass parameter 1 for DESCENDING order
*/

// bubble sort algorithm for integers
vector<int> bubbleSort(vector<int> arr, int mode){
    // ASCENDING
    if(mode == 0){    
        int nR = 0; 
        int nM = 0;     

        while((nR == 0 && nM == 0) || nM != 0){
            nM = 0; 
            nR = 0; 
            for(int j=1; j<arr.size(); j++){
                int i=j-1; 
                if(arr[i] > arr[j]){
                    nM++; 
                    swap(arr[j], arr[i]); 
                }
            }
            nR++;   
        }
    }
    // DESCENDING
    else if(mode == 1){    
        int nR = 0; 
        int nM = 0;     
        while((nR == 0 && nM == 0) || nM != 0){
            nM = 0; 
            nR = 0; 
            for(int j=1; j<arr.size(); j++){
                int i=j-1; 
                if(arr[i] < arr[j]){
                    nM++; 
                    int tmp = arr[j]; 
                    arr[j]  = arr[i]; 
                    arr[i] = tmp; 
                }
            }
            nR++; 
        }
    }
    return arr; 
}   