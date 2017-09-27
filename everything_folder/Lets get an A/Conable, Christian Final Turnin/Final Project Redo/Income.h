#ifndef INCOME_H
#define INCOME_H
#include <iostream>
#include <cstdlib>

using namespace std; 

class Incomes{
      private:
              float incomes; 
      public:
             Incomes()
             { incomes = 0.0e0f; }
             void setIncome(float inc); 
             //float getIncome() const;
}; 
#endif

void Incomes::setIncome(float inc){
     if (inc > 1.0e5f){
         cout << "\nBecause your combined household income" << endl; 
         cout << "is over $100,000, You will be receiving no" << endl; 
         cout << "subsidized loans from Financial Aid." << endl; 
         incomes = inc;}
     else if (inc < 1.0e5f && inc > 8.0e4f){
         cout << "\nBecause your combined household income" << endl; 
         cout << "is over $80,000, only 25% of your financial" << endl; 
         cout << "aid will be rewarded as subsidized Stafford Loans." << endl; 
         incomes = inc;}
     else if (inc < 8.0e4f && inc > 6.0e4f){
         cout << "\nBecause your combined household income" << endl; 
         cout << "is over $60,000, 50% of your financial" << endl; 
         cout << "aid will be rewarded as subsidized Stafford Loans." << endl; 
         incomes = inc;}
     else{
         cout << "\nAll of your financial aid will be rewarded"
              << " as \nsubsidized loans." << endl; 
         incomes = inc;}
}

