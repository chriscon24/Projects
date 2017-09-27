//Header File for Problem 5

#ifndef PROB5_H
#define PROB5_H
#include <iostream>
#include <string>

using namespace std; 

class Employee
{
      private:
		float Tax(float);   //<-- I'm hoping you did the double on purpose 
		char   MyName[20];      
		char   JobTitle[20];    
		float  HourlyRate;      
		int    HoursWorked;     
		float  GrossPay;        
		float  NetPay;          
      public:
		Employee(char[], char[], float);
		float  CalculatePay(float hr,int t)
        { return getNetPay(getGrossPay(setHourlyRate(hr), setHoursWorked(t))); } 
		float  getGrossPay(float,int);  
		float  getNetPay(float)
        { NetPay = GrossPay - Tax(GrossPay);
          return NetPay; }  
		void   toString();              
		int    setHoursWorked(int);     
		float  setHourlyRate(float);
}; 
#endif 
