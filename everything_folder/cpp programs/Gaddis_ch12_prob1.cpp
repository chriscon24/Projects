/*
  Christian Conable
  03/28/2014
  Gaddis Chapter 12 problem 1
*/

#include <iostream> 
#include <fstream>  
#include <cstring>   

using namespace std;

int main() {
    
     cout << "Please enter the name of the file: ";
     string fileName;                               
     getline(cin, fileName);                        

     ifstream file(fileName.c_str(), ios::in);      

     string line;                                   

     for (int count = 1; !file.eof(); ++count) {
          getline(file, line);                      

          cout << line << endl;                     
          if (count % 24 == 0) 
             system("Pause");    
     }

     system("Pause"); 
     return 0;                               
}
