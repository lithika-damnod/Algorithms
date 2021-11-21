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
    quickSort(arr, mode)
    pass parameter 0 for ASCENDING order
    pass parameter 1 for DESCENDING order
*/

// quick sort algorithm for integers
vector<int> quickSort(vector<int> arr, int mode){
    //  ASCENDING
    if(mode == 0){
        int nPivots = 0;  
        while(nPivots != arr.size()){
            int baseIndex = (arr.size() + 1) / 2;  
            int basePivot = arr[baseIndex];
            vector<int> arrClone = arr; 
            for(int i=1; i<baseIndex; i++){
                int j = i - 1; 
                if(arr[j] > arr[i]){
                    int tmp = arr[j]; 
                    arr[j] = arr[i]; 
                    arr[i] = tmp; 
                }
            }
            for(int i=arr.size(); i > baseIndex; i--){
                int j = i - 1; 
                if(arr[j] > arr[i]){
                    if(arr[j] == baseIndex ){
                        break; 
                    }
                    int tmp = arr[j]; 
                    arr[j] = arr[i]; 
                    arr[i] = tmp; 
                }
            }
        }
        return arr; 
    }
    // DESCENDING
    else if(mode == 1){
        return arr; 
    }
    return arr;     
}