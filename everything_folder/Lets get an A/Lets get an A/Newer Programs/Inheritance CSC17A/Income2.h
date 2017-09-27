#ifndef INCOME2_H
#define INCOME2_H
#include "Income.h"
#include <iostream>
#include <cstdlib>
using namespace std; 
class Income2:public Incomes{
      private:
              int size; 
              int *array; 
      public:
             //Consructors for Derived Class
             Income2()
             { size = 0; }
             Income2(int house_size, int *)
             { set(house_size, array); }
             //Destructor
             ~Income2()
             { delete [] array; }
             //Mutator Functions for Derived Class
             void set(int, int *);
             //Accessor Functions for Derived Class
             int getSize() const
             { return size; }
}; 
#endif
void Income2::set(int house_size, int *array){
     array = new int[house_size]; 
     int sum = 0; 
     for(int i = 1; i < house_size; i++){
             cout << "\n\nEnter the total annual income" 
                  << "\nfor the " << (i + 1) << " household" 
                  << "\nmember." << endl; 
             cout << "Income: $"; 
             cin >> array[i];
             while (array[i] < 0)
             { cout << "Income: $"; 
               cin >> array[i]; }
             sum += array[i]; }   
     cout << "Total household income: $" 
          << sum << "." << endl; 
     setIncome(sum);
} 
     
     
