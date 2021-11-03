#pragma once 
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

//insertion sort ASCENDING 
vector<int> insertionSort(vector<int> arr){
	for(int j=1; j<arr.size(); j++){
		int key = arr[j]; 
		int i = j-1; 
		while(i > 0 && arr[i] > key){
			arr[i + 1] = arr[i]; 
			i = i - 1; 
		}
		arr[i+1] = key; 
	}
	return arr; 
}
