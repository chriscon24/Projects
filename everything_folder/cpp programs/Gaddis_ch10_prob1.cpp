/*
  Christian Conable
*/
#include<iostream>
#include <cstring>

using namespace std;

int characters(char *);

int main(int argc, char *argv[]){
     char string[]="How many characters are in this sentence?";
     int count;
     cout << string << endl; 
     
     count = characters(string);
     cout<< count << endl;
     
     system("pause");
     return 0; 
}
int characters(char *str){  
     int count = 0;
     int i = 0;
     while(str[i] != '\0'){
          count++;
          i++;
     }
     return count;
}
