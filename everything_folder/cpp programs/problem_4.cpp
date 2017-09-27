#include <iostream>
#include <ctime>

using namespace std;

void retrand(short int*, int [5], int, int);

int main(int argc, char *argv[]){
    const int n = 5, ntimes = 10000;
    short int rndseq[] = {9,51,78,181,251};
    int freq[n] = {0};
    cout << endl <<  "This program will loop the " << endl; 
    cout << "sequence  9,51, 78, 181, and 251 " << endl; 
    cout << "10,000 times and will display the frequency" << endl;
    cout << "at which these numbers were generated" << endl; 
    cout << "in the loop." << endl; 
    
    retrand(rndseq, freq, n, ntimes);
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
void retrand(short int* rndseq, int freq[5], int n, int ntimes){
    srand(int(time(NULL)));
    for(int count1 = 0; count1 < ntimes; count1++){
        int number;
        number = rand() % 5;
        for(int count2 = 0; count2 < n; count2++){
            if(number == count2)
                freq[count2] = freq[count2] + 1;
        }
    }
    cout << endl; 
    for(int count1 = 0; count1 < n; count1++)
        cout <<  rndseq[count1] << " occured " << freq[count1] << " times\n";
    cout << endl; 
}


     
