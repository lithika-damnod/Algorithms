#include <iostream>
#include <vector>
#include <string>  
using namespace std; 

//Kruskal's Algorithm
//get metrices
int** getMetrices(){
	int nV; cin >> nV; 
	int mtx[nV][nV]; 
	for(int i=0; i<nV; i++){
		for(int j=0; j<nV; j++){
			int tmpInt; cin >> tmpInt;
			mtx[i][j] = tmpInt; 
		}
	}
	return mtx; 
}


int main(){
	
	int *p = getMetrices(); 	
	return 0; 
}
