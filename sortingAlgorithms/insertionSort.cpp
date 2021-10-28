#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

//insertion sort <int>
vector<int> insertionSort(vector<int> arr){
	for(int i=1; i<arr.size(); i++){
		int index = i; 
		if(arr[i-1] > arr[i]){
			int num = arr[i]; 
			while(arr[index-1] > arr[i]){
				
			}	
		}
	}
}

int main(){
	vector<int>para = {1, 4, 2, 10, 2, 3, 5};
	insertionSort(para); 
	return 0; 
}
