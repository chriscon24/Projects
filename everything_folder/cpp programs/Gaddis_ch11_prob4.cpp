/*
  Christian Conable
*/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

struct weather{
   float total;   
   float high;        
   float low;       
   float average; 
   };
   
int main(){
        const int MONTH = 12; 
        weather month[MONTH];
        
        string name[MONTH]={"January","February","March",
                              "April","May","June",
                              "July","August","September",
                              "October","November","December"};
         int high = 0,low = 0;
         float total = 0.0e0f, monthly, final = 0.0e0f, final_ave;
         
         cout << "Monthly weather information:\n";
         
         for(int i = 0; i < MONTH; i++){
                cout << endl << name[i] << endl;
                cout << "Rain Fall: ";
                cin >> month[i].total;
                
                cout << "Highest temperature: ";
                cin >> month[i].high;
                while(month[i].high < -100 || month[i].high > 140){
                   cout << "Invalid entry.";
                   cout << "Highest temperature: ";
                   cin >> month[i].high;
                }
                cout << "low Temperature: ";
                cin >> month[i].low;
                while((month[i].low < -100||month[i].low > 140) || (month[i].low > month[i].high)){
                   cout << "Invalid entry. ";
                   cout << "Lowest Temperature: ";
                   cin >> month[i].low;
                }
                month[i].average = (month[i].high + month[i].low)/2;
                total += month[i].total;
                final += month[i].average;
         }
         monthly = total/MONTH;
         final_ave = final/MONTH;
         
         for(int i = 1; i < MONTH; i++){
            if(month[i].high > month[high].high)
                high = i;
            if(month[i].low < month[low].low)
                low = i;
         }
         
         cout << "\nTotal rain fall: " << total << endl;
         cout << "Average Monthly Rainfall: " << monthly << endl;
         cout << "Average Monthly Temperature: " << final_ave << endl;
         cout << "Highest Temperature: " << month[high].high << endl;
         cout << "Lowest Temperature: " << month[low].low << endl;
       
   system("pause");
   return 0;
}
