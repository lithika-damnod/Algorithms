#include <iostream> 
#include <vector> 
using namespace std; 

//merge sort - ASCENDING
vector<int> mergeSort(vector<int> arr){
		
}


int main(){
	
	//testing
	vector<int> arr = {10, 2, 3, 1, 4, 20, 1, 3, 4}; 
	vector<int> results = mergeSort(arr); 
	for(int i=0; i<results.size(); i++){
		cout << i << ": " << results[i] << endl;  
	return 0; 	
}	
