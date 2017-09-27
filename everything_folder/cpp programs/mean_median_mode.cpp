/*
  Christian Conable
  Mean, Median, Mode Problem
  03/14/2014
*/

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void fill(int *, int); 
void sort(int *, int); 
float mean(int *,int);

int main(int argc, char *argv[]){
    float average, final; 
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE = 22;
    int array[SIZE];  
    
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(2); 
    
    cout << "\nHere is a set of 20 random numbers"
         << "\nranging from 0 - 10:\n " << endl; 
    fill(array, SIZE); 
    
    cout << "\nAnd here they are again in ascending order: " << endl; 
    sort(array,SIZE); 
    
    average = mean(array, SIZE); 
    final = average/SIZE; 
    cout << endl << "\nThe mean for this set is: " << final << endl; 
    
    int med = SIZE/2; 
    cout << "\nThe median for this set is: " << array[med - 2] << endl; 
    
    int count = 0,max = 0;
    for(int i = 0;i< SIZE - 1;i++){
        if(array[i] == array[i+1]){
            count++;
            if(count > max)
                max = count;
        }
        else
            count=0;
    }  
    
    int modes = 0;
    count = 0;
    for(int i = 0;i < SIZE - 1;i++){
        if(array[i] == array[i + 1]){
            count++;
            if(count == max)
                modes++;
        }
        else
            count = 0;
    }
    
    int *mode = new int[modes + 2];
    int count2 = 2;
    mode[0] = modes;
    count = 0;
    for(int i = 0;i < SIZE - 1;i++){
        if(array[i] == array[i + 1]){
            count++;
            if(count == max)
                mode[count2++] = array[i];
        }
        else
            count = 0;
    }
    mode[1] = ++max;

    cout << "The Max Frequency is: " << max << endl;
    cout << "The number of modes is: " << modes << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
float mean(int *a,int n){
      float total = 0; 
      for (int i = 0; i < n; i++)
          total += a[i]; 
      return (total); 
}
void fill(int *a, int n){
     for (int i = 0; i < n; i++){
        a[i] = rand() % 10 + 1; 
        cout << a[i] << " ";  
    }
    cout << endl << endl; 
}
void sort(int *a, int n){
     for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                a[i] = a[i]^a[j]; 
                a[j] = a[j]^a[i]; 
                a[i] = a[i]^a[j];
            }
        }
        cout << a[i] << " "; 
    } 
}

