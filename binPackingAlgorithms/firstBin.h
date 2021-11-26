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
    int sum = 0; 
    int i = 0; 
    vector<int> push; 
    while(i < arr.size()){
        while(sum < size){
            sum += arr[i];
            if(sum > size){
                break; 
            }
            push.push_back(arr[i]);  
            cout << "pushing: " << arr[i] << endl; 
            i++; 
            cout << "i: " << i << endl;
            cout << "sum: " << sum << endl;  
        }
        retArr.push_back(push); 
        push.clear(); 
        cout << "----------" << endl; 
        sum = 0; 
    }

    return retArr; 
}