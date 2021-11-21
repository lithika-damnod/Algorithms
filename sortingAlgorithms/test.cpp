#include <iostream> 
#include <vector>
#include "quickSort.h"
#include "bubbleSort.h"
using namespace std; 

int main(){
    
    vector<int> arr = { 23, 16, 15, 34, 18, 25, 11, 19 }; 
    vector<int> ascArr = quickSort(arr, 0); 
    vector<int> descArr = bubbleSort(arr, 1); 
    cout << "ASCENDING QUICK SORT" << endl; 
    for(int i=0; i<ascArr.size(); i++){
        cout << ascArr[i] << endl; 
    }
    cout << "DESCENDING BUBBLE SORT" << endl; 
    for(int i=0; i<descArr.size(); i++){
        cout << descArr[i] << endl;     
    }
    return 0; 
}