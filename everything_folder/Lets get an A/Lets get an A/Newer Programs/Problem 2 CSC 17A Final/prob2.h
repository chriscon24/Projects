#ifndef PROB2_H
#define PROB2_H
#include <cstdlib>

template<class T>
class Prob2Sort
{
	private:
		int *index;                                 
	public:
		Prob2Sort()
        { index = NULL; }
		~Prob2Sort()
        { delete []index; }
		
		T* sortArray(const T* type, int i, bool max)
        { return type; }

		T* sortArray(const T* a, int row, int column, int sort, bool ascending){
			T* array = new T[(row * column)];
			bool sorted = true;
			for(int i = 0; i < row; i++){
				for(int j = 0; j < column; j++)
					array[column * i + j] = a[column * i + j];
            }		
			do{
				sorted = true;
				if(ascending == false){
					for(int i = 0; i < row - 1; i++){
						if(array[column * i + sort] < array[column * (i + 1) + sort]){
							sorted = false;
							for(int j = 0; j < column; j++){
								T temp;
								temp = array[i * column + j];
								array[i * column  + j] = array[(i + 1) * column  + j];
								array[(i + 1) * column  + j] = temp;
							}
						}
					}
				}
				
				else{
					for(int i = 0; i < row - 1; i++){
						if(array[column * i + sort] > array[column * (i + 1) + sort]){
							sorted = false;
							for(int j = 0; j < column; j++){
								T temp;
								temp = array[i * column + j];
								array[i * column  + j] = array[(i + 1) * column  + j];
								array[(i + 1) * column  + j] = temp;
							}	
						}
					}
				}
			}while(sorted == false);
			return array;
		}
}; 
#endif
