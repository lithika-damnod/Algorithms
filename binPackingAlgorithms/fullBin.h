#pragma once 

#include <iostream> 
#include <vector>   
using namespace std; 

vector<vector<int>> inspect(vector<int> arr, int size){
    
    vector<vector<int>> output;
    int sum = 0;
    vector<int> tmpArr;

    for(int i=0; i<arr.size(); i++){

        tmpArr.push_back(arr[i]); 
        for(int x=0; x<arr.size(); i++){
            
            while(sum != size){

                if(x == i){
                    break; 
                }
                else{
                    sum += arr[x]; 
                } 
            }
        }
    }

    return output; 
}