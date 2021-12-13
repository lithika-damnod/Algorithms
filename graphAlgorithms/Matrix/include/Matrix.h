#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
using namespace std;
class Matrix
{
    public:
        Matrix();
        Matrix(int n);
        virtual ~Matrix();
        void print(); // prints the matrix
        int size(); // returns the size of the matrix
        vector<int> pop_row(int index); // deletes a row in the matrix
    protected:

    private:
        int nV = 0;
        vector<vector<int>> data;
};

#endif // MATRIX_H
