#pragma once

#include <iostream> 
#include <vector>
using namespace std; 


/*
    median(arr)
    arr: vector<int>
    returns: int

    usage: 
        returns the index of the median in an array
*/

int median(vector<int> arr){
    
    /*
        mathematical equation for median
        median = ( n + 1 ) / 2;  
    */

    int n = arr.size(); 
    auto median = ( n + 1 ) / 2; 
    
    if((n+1 % 2) == 0){
        
        return median; 
    } 
    else{
        
        return median+1;
    }
}


/*
    quickSort(arr, mode)
    arr: vector<int>
    mode: int

    pass parameter 0 for ASCENDING order
    pass parameter 1 for DESCENDING order
*/

vector<int> quickSort(vector<int> arr, int mode){
    
    vector<int> copy = arr;
    vector<int> lower; 
    vector<int> higher; 
    vector<int> output(arr.size()); 

    for(int i=0; i<arr.size(); i++){
        
        // find median
        int midI = median(copy); 
        int mid = copy[midI]; 
        
        // rearrange the arr to elements that are less to the left and hight to the right
        for(int j=0; j<copy.size(); j++){
            
            // arr.clear(); 
            if(j == midI)
                break; 

            if(copy[j] <= mid)
                lower.push_back(copy[j]); 
                        
            else
                higher.push_back(copy[j]); 
        }
        
    }
    return arr; 
}