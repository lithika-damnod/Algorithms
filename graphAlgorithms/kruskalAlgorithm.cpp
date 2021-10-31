#include <iostream>
#include <vector> 
using namespace std; 

//Kruskal's Algorithm

//get metrices
void getMetrices(){
	bool similarFound = false; 
	//while loop not working properly : TODO
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
		//validation - detect same vertice letters	
		for(int i=0; i<charArr.size(); i++){
			for(int j=i+2; j<charArr.size(); j++){
				if(charArr[i] == charArr[j]){
					cout << "similar vertices found.." << endl;
				}
				else{
					similarFound = true; 
				}
			}
		}
	}
}


int main(){
	getMetrices(); 	
	return 0; 
}
