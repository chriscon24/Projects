#include <string>
#include <iostream>
#include "Prob3.h"
using namespace std;

#ifndef PROB3B_H
#define	PROB3B_H

template <class T>
class Prob3TableInherited  : public Prob3Table<T> 
{
	protected:
            T *augTable;
	public:
            Prob3TableInherited(char*, int, int);
            ~Prob3TableInherited()
            { delete [] augTable; }
            const T *getAugTable(void)
            { return augTable; }
};

template <class T>
Prob3TableInherited<T>::Prob3TableInherited(char* f, int row, int col) : Prob3Table<T>(f, row, col) {
    augTable = new T[(this->rows + 1) * (this->cols + 1)];
    augTable[((this->rows + 1) * (this->cols + 1)) - 1] = this->grandTotal;
     
    int count = 0; 
    for(int i = 0,j = 0, k = 0, l = 0; i < (this->rows + 1)*(this->cols + 1); i++){ 
        if(!(i / (this->cols + 1) == this->rows)){ 
            if(!(count == this->cols)){ 
                augTable[i] = this->table[k]; 
                k++;
                count++;
            }
            else {
               augTable[i] = this->rowSum[j];
               j++; 
               count = 0; 
            }
        }
        else {
           if (l < 6) {
                augTable[i] = this->colSum[l]; 
                l++;
            }
        }
    }
}
#endif
