#include <string>
#include <iostream>
using namespace std;

#ifndef PROB3_H
#define	PROB3_H

template <class T>
class Prob3Table
{
    protected:
        int rows; 
        int cols;
        T *rowSum;
        T *colSum;
        T *table; 
        T grandTotal; 
        void calcTable(void); 
    public:
        Prob3Table(char*, int, int); 
        ~Prob3Table()
        {delete [] table;
         delete [] rowSum;
         delete [] colSum;}; 
        const T *getTable(void){return table;};
        const T *getRowSum(void){return rowSum;}; 
        const T *getColSum(void){return colSum;}; 
        T getGrandTotal(void){return grandTotal;};
};

template <class T>
Prob3Table<T>::Prob3Table(char* f, int row, int col){
    grandTotal = 0; 
    rows = row;
    cols = col; 
    T temp;
    fstream infile;
    infile.open(f,ios::in);
    
    table = new T[(rows*cols)];
    int count = 0; 
    while(!infile.eof()){
        infile >> temp;
        *table = temp;
        grandTotal += *table;
        table++;
        count++;
    }   
    table -= count;
    infile.close();
    Prob3Table<T>::calcTable();
}

template <class T>
void Prob3Table<T>::calcTable(void){
    rowSum = new T[rows];
    colSum = new T[cols];
    
    for(int i = 0;i < rows;i++) 
        rowSum[i] = 0; 
    for(int i = 0;i < cols;i++) 
        colSum[i] = 0;
    for(int i = 0;i < rows;i++){
        for(int j = 0;j < cols;j++)
            rowSum[i] += table[i*cols+j];
    }   
    for(int i = 0;i < cols;i++){
        for(int j = 0;j < rows;j++)
            colSum[i] += table[(j*cols) + i];
    }  
}

#endif
