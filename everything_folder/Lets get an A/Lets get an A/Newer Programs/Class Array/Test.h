#ifndef TEST_H
#define TEST_H
#include <string>

using namespace std; 

class Test{
      private:
              int input; 
      public:
             void setInput(int inp)
             { input = inp; }
             int getInput() const
             { return input; }
}; 
#endif
