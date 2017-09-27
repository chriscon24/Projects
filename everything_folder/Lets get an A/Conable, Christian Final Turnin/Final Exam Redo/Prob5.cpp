//Specification file for problem 5 header file

#include <iostream>
#include "Prob5.h"

using namespace std; 

Employee::Employee(char nm[],char jt[],float hr){
      for (int i = 0; i < 21; i++)
           MyName[i] = nm[i]; 
      for (int i = 0; i < 21; i++)
           JobTitle[i] = jt[i];    
      HoursWorked = 0; 
      GrossPay = 0.0e0f; 
      NetPay = 0.0e0f; 
}

float Employee::Tax(float gp){
      if (gp <= 5.00e2f){
            gp *= 1.0e-1f; 
            return(gp); 
      } 
      else if (gp > 5.00e2f && gp <= 1.00e3f){
            gp = (gp - 5.00e2f)*2.0e-1f;  
            return(gp + Tax(5.00e2f));
      } 
      else if (gp > 1.0e3f)
            return((gp - 1.00e3f)*3.0e-1f + Tax(1.00e3f)); 
      else
           cout << "\nInvalid Entry." << endl; 
}

float Employee::getGrossPay(float hr,int t){
      if (t <= 40)
          GrossPay = hr*t; 
      else if (t > 40 && t < 50){
          float gross1 = 40*hr; 
          float gross2 = (t - 40)*(1.5*hr); 
          GrossPay = gross1 + gross2; 
      }
      else if (t >= 50){
          float gross1 = 40*hr;
          float gross2 = (50 - 40)*(1.5*hr); 
          float gross3 = (2*hr)*(t - 50); 
          GrossPay = gross1 + gross2 + gross3; 
      }
      else
          cout << "Invalid Data." << endl; 
      return GrossPay; 
}

int Employee::setHoursWorked(int t){
      if (t > 0 && t < 84)
         HoursWorked = t; 
      else {
         cout << "Invalid Hours Worked" << endl; 
         HoursWorked = 0; 
      }
      return HoursWorked; 
}

float Employee::setHourlyRate(float hr){ 
      if (hr > 0 && hr < 200)
         HourlyRate = hr; 
      else {
         cout << "Invalid Hourly Rate." << endl; 
         HourlyRate = 0;
      }  
      return HourlyRate; 
}

void Employee::toString(){
      cout << "Name: " << MyName << "." << endl; 
      cout << "Title: " << JobTitle << "." << endl; 
      cout << "Hourly Pay: $" << HourlyRate << "." << endl; 
      cout << "Hours Worked: " << HoursWorked << "." << endl; 
      cout << "Gross Pay: $" << GrossPay << "." << endl; 
      cout << "Net Pay: $" << NetPay << "." << endl;
      cout << endl << endl; 
}
           
            
      
           
      
