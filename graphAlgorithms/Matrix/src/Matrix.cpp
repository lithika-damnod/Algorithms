#include "Matrix.h"
#include <iostream>
#include <vector>
using namespace std;

Matrix::Matrix()
{
    cout << "number of vertices: ";
    int n; cin >> n;
    nV = n;
    // input the values for the matrix
    for(int i=0; i<n; i++){
        vector<int> tmpArr;
        for(int j=0; j<n; j++){
            int vertex_val;
            cin >> vertex_val;
            tmpArr.push_back(vertex_val);
        }
        data.push_back(tmpArr);
    }

}

Matrix::Matrix(int n){
    nV = n;
    for(int i=0; i<n; i++){
        vector<int> tmpArr;
        for(int j=0; j<n; j++){
            int vertex_val;
            cin >> vertex_val;
            tmpArr.push_back(vertex_val);
        }
        data.push_back(tmpArr);
    }
}

void Matrix::print(){
    for(int i=0; i<nV; i++){
        for(int j=0; j<nV; j++)
            cout << data[i][j] << '\t';
        cout << endl;
    }
}

int Matrix::size(){
    return nV;
}

vector<int> Matrix::pop_row(int index){
    if(index < nV){
        vector<int> poped = data[index];
        data.erase(data.begin() + index);
        nV--;
        return poped;
    }
}

Matrix::~Matrix()
{
    //destructor
}
