//Specification File for problem 4

#include <iostream>
#include "Prob4.h"

using namespace std; 

SavingsAccount::SavingsAccount(float b){
    if(b > 0)
        Balance = b; 
    else
        Balance = 0; 
    FreqDeposit = 0; 
    FreqWithDraw = 0; 
}
void SavingsAccount::Transaction(float tr){
    if(tr > 0){
      Balance += tr; 
      FreqDeposit++; 
    }
    else{
      tr *= -1; 
      if(tr <= Balance){
            Balance -= tr; 
            FreqWithDraw++; 
      }
      else {
          cout << "This is beyond the amount "  
               << "in \nyour savings account." << endl;
      } 
    }
}             
float SavingsAccount::Total(float sav, int yrs){
      float a = Balance;
      float intrst = 1 + sav;  
      int i = 1; 
      while(i <= yrs){
              a *= intrst; 
              i++;
      }
      return a; 
}

float SavingsAccount::TotalRecursive(float sav, int yrs){
      float b = Balance; 
      float intrst2 = 1 + sav;
      int j = yrs;        
      if(j == 0)
             return b; 
      return SavingsAccount::TotalRecursive(sav, --j)*intrst2;  
}
      
void SavingsAccount::toString(){
      cout << "Balance: $" << Balance << "." << endl; 
      cout << "Number of Withdraws: " << FreqWithDraw << "." << endl; 
      cout << "Number of Deposits: " << FreqDeposit << "." << endl;
} 
      
