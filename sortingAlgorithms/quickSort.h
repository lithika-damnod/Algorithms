#pragma once 

#include <iostream> 
#include <vector>
using namespace std; 


/*
    quickSort(arr, mode)
    pass parameter 0 for ASCENDING order
    pass parameter 1 for DESCENDING order
*/

// quick sort algorithm for integers
vector<int> quickSort(vector<int> arr, int mode){
    //  ASCENDING
    if(mode == 0){
 
    }
    // DESCENDING
    else if(mode == 1){
        return arr; 
    }
    return arr;     
}