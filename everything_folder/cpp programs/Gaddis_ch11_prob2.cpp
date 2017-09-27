/*
  Christian Conable
  03/28/2014
  Gaddis Chapter 11 problem 1
*/

#include <cstdlib>
#include <iostream>

using namespace std;

struct MovieData{
      string title, director; 
      int year, costs, minutes;
      float profit;  
      }; 
       
void show_mov(MovieData temp2); 

int main(int argc, char *argv[]){
    MovieData movie1, movie2;
    
    movie1.title = "The Iceman";
    movie1.director = "Ariel Vromen";
    movie1.year = 2012;
    movie1.minutes = 105;
    movie1.costs = 30;
    movie1.profit = 4.90e1f;  
    
    movie2.title = "Uncle Buck";
    movie2.director = "John Hughes";
    movie2.year = 1989;
    movie2.minutes = 99;
    movie2.costs = 10; 
    movie2.profit = 9.0e0f;   
    
    show_mov(movie1); 
    show_mov(movie2); 
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
void show_mov(MovieData temp){
cout << "Movie Title: " << temp.title <<endl;
cout << "Movie Director: " << temp.director << endl;
cout << "Movie year released: " <<temp.year << endl;
cout << "Movie run time: " << temp.minutes << endl;
cout << "Cost of production: $" << temp.costs << " million." << endl; 
cout << "Net profit: $" << temp.profit << " million." << endl << endl; 
}

