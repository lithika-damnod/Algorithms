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
        void print();
    protected:

    private:
        int nV = 0;
        vector<vector<int>> data;
};

#endif // MATRIX_H
