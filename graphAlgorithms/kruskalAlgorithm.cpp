#include <iostream>
#include <vector> 
using namespace std; 

//Kruskal's Algorithm

//get metrices
void getMetrices(){
	bool similarFound = false; 
	//while loop not working properly : TODO
	//while doesn't loop when there's similar vertex letters found	
	while(!similarFound){
		cout << "number of vertices: "; 
		int nV; cin >> nV; 
		cout << "enter vertex letter" << endl; 
		vector<char> charArr; 
		for(int i=0; i<nV; i++){
			cout << "vertex " << i + 1 << ": "; 
			char vChar; cin >> vChar; 	
			charArr.push_back(vChar); 
		}
	}
}


int main(){
	getMetrices(); 	
	return 0; 
}
