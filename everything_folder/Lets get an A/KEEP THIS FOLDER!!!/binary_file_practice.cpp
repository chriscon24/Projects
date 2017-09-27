#include <fstream>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	string stuff = "abcdefghijklmnopqrstuvwxyz";
	fstream file("file.txt", ios::out | ios::binary);
	
	if(file.fail())
		cout << "Problem opening the selected file";
		
	file.clear();
			
	file << stuff << endl;
	
	cout << "\nFile has been written to in binary mode\n";
	
	file.clear();
	file.close();
	
	file.open("file.txt", ios::in | ios::binary);

	if(!file.is_open())
		cout << "\nFile is not open\n";
		
	char character;
		
	cout << "\nFile will be read in binary mode\n";
	
	while(!file.eof()){
		character = file.get();
		cout << character;
	}
	
	cout << "\nFile contents have been copied to other_stuff variable, displayed below\n";
	
	file.close();
	
	cin.get();
	return EXIT_SUCCESS;	
}
