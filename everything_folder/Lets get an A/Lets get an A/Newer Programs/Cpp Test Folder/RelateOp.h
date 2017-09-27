#ifndef RELATEOP_H
#define RELATEOP_H
#include <iostream>
#include <cstdlib>

using namespace std; 

class Incomes{
      private:
              int size2; 
      public:
             //Consructors for Derived Class
             Incomes()
             { size2 = 0; }
             //Mutator Functions for Derived Class
             void setSize(int f)
             { size2 = f; }
             //Accessor Functions for Derived Class
             int getSize() const
             { return size2; }
            
             bool operator < (const Incomes &); 
};
#endif
bool Incomes::operator < (const Incomes &right){
    bool status;
    if (size2 < right.size2)
       status = true;
    else
        status = false;
    return status;
}
