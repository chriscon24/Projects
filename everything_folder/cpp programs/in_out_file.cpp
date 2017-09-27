#include <iostream>
#include <cstdlib>
#include <fstream>


int main (){
    using namespace std; 
    char in_file_name[16], out_file_name[16]; 
    ifstream in_stream; 
    ofstream out_stream; 
    
    cout << "I will sum three numbers taken from an input\n"
         << "file and write the sum to an output file.\n";
          
    cout << "Enter the Input File: "; 
    cin >> in_file_name;
     
    cout << "Enter the output file name: "; 
    cin >> out_file_name; 
    
    cout << "I will read numbers from the file " << in_file_name << " and\n"
         << "place the sum in the file " << out_file_name << "." << endl; 
    
    in_stream.open(in_file_name); 
    if(in_stream.fail()){
        cout << endl << "Input file opening failed." << endl; 
        system("pause"); 
        exit(1); 
    }
    
    out_stream.open(out_file_name); 
    if(out_stream.fail()){
        cout << endl << "Output file opening failed." << endl; 
        system("pause"); 
        exit(1); 
    }
    int first, second, third, fourth; 
    in_stream >> first >> second >> third >> fourth; 
    out_stream << endl << "The sum of the first 3\n"
               << "numbers in " << in_file_name << endl
               << "is " << (first + second + third + fourth)
               << endl; 
    cout << in_file_name << endl; 
    in_stream.close(); 
    out_stream.close(); 
    
    cout << endl << "End of program." << endl; 
    
    system("pause"); 
    return 0; 
}
