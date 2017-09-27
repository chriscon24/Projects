//Header File for Problem 4

#ifndef PROB4_H
#define PROB4_H

class SavingsAccount 
{
    private:             
		float Balance;                      
		int   FreqWithDraw;                 
		int   FreqDeposit; 
    public:
		SavingsAccount(float);              
		void  Transaction(float);            
		float Total(float = 0,int = 0);	         
		float TotalRecursive(float = 0,int = 0);
		void  toString();                    
	   
}; 
#endif
