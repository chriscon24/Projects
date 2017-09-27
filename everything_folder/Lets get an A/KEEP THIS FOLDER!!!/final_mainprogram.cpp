/*
  Name: Main program for Final Project
  Author: Christian Conable
  Date: 06/09/2014
*/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Student.h"
#include "BasicInfo.h"
#include "Date.h"
#include "Income2.h"
#include "Foreign.h"

using namespace std;

bool valid_social(string social);
string clean_phone(string phone_number);
bool phone_valid(string phone_number);
bool has_symbols(string data);
bool data_valid(int lower_range, int upper_range, string data_name, int data);
void display_social(string social_security_number);
void display_social(string social_security_number, int dummy);
//void Date(int, int, int); 
void Date2(int, int, int); 
void Passport(int, int, int); 
void Toefl(int, int, int, int);
int main(int argc, char *argv[]){
    //string variables
    string first, last, state;
    string major;
    string address; 
    string city; 
    string phone_number;// = new char[10];
    string high_school;// = new char[9];
    string *college_list; 
    string social_security_number;
    //Integer, character and float variables
    int zip, grad_year; 
    int number_colleges; 
    int age;
    int hs_month, hs_day, hs_year;
    int house_size;
    int license1, first2, second;
    int third, fourth, total;  
    int day4, month, year; 
	char choice, citizen, document; 
	char passport;
	string country; 
	Foreign<int> set7;
    Foreign<int> set8;
    const int last_years = 3;
    const int this_year = 4;
    const int col = 4;  
    float average;
    string introduction = "\nThis next section will determine you American citizenship status"
		   				  "\nbased on information pertaining to your residency status,"
			 			  "\nTOEFL scores, passport, and what have you...\n";
    float income; 
	char gender, is_correct, stand;
	//Class Declaration variables
    Student student; 
    BasicInfo set;
    BasicInfo size, employed; 
    Date hs_graduation, date_of_birth, set2;
    int *array; 
    do{
        cout << endl; 
	    cout << setw(60) << "***********************************************" << endl; 
	    cout << setw(60) << "******** College Transfer Application *********" << endl; 
	    cout << setw(60) << "***********************************************" << endl; 
	    cout << "\tIn this program, a transferring college student will enter" 
	         << "\ninformation for the application, and the program will then" 
	         << "\ndisplay the results.\n\n" << endl; 
	    cout << setw(51) << "STUDENT PERSONAL INFORMATION: " << endl; 
	    do{
		    //Enter Student's First name
		    cout << "Student First Name: "; 
		    cin >> first; 
		}while(has_symbols(first) == true);
	    student.setFirst(first); 
	    do{
		    //Enter Student's last name
		    cout << "Student Last Name: "; 
		    cin >> last; 
		}while(has_symbols(first) == true);
	    student.setLast(last);
	    do{
		    //Enter Student's last name
		    cout << "Student's age: "; 
		    cin >> age; 
		}while(data_valid(16, 100, "age", age) == false);
	    set2.setAge(age); 
	    do{
            //Enter student's birthday                  
			cout << "Student's birthday, ex 06 06 1985: ";
			cin >> date_of_birth.month >> date_of_birth.day >> date_of_birth.year;
	    }while(Date::date_valid(date_of_birth) == false);
	    do{
		    //Enter Student's gender
		    cout << "Student's gender, M / F: "; 
		    cin >> gender; 
		}while(!(gender == 'm' || gender == 'f' || gender == 'M' || gender == 'F'));
		do{
		    //Enter Student's Street Address
		    cout << "Street Address: ";
		    cin.ignore();  
		    getline(cin, address);
		}while(has_symbols(address) == true);
	    do{
		    //Enter City 
		    cout << "City: ";  
		    getline(cin, city);
		}while(has_symbols(city) == true);
	    student.setCity(city); 
	    do{
		    //Enter State 
		    cout << "State: ";
		    cin >> state;
		}while(has_symbols(state) == true);
		student.setState(state); 
	    do{
		    //Enter Zip Code
		    cout << "Zip Code: "; 
		    cin >> zip; 
	    }while(data_valid(00000, 99999, "zip code", zip) == false);
	    student.setZip(zip); 
	    do{
            //Enter Social Security Number
    		cout << "Your social security number, 123-45-6789: ";
    		cin >> social_security_number;
		}while(valid_social(social_security_number) == false); 
	    do{
		    //Enter student's phone number
		    cout << "\nEnter your phone number with area code: "; 
		    cin.ignore();  
		    getline(cin, phone_number);
		    phone_number = clean_phone(phone_number);
		}while(phone_valid(phone_number) == false);
	    do{
		    //Enter High School student graduated from
		    cout << "High School you last attended: "; 
		    getline(cin, high_school);
		}while(has_symbols(high_school) == true);
	    do{
            //Enter Date of graduation from high school
			cout << "Date of high school graduation, ex 06 06 2000: ";
			cin >> hs_graduation.month >> hs_graduation.day >> hs_graduation.year;
	    }while(Date::date_valid(hs_graduation) == false);
	    do{
            //Enter the number of colleges 
            //the student is applying to
		    cout << "Number of colleges you are applying to: "; 
		    cin >> number_colleges;
		}while(data_valid(1, 8, "number of colleges", number_colleges) == false);
	    cin.ignore();
	    //Dynamically allocated array for number of colleges
	    college_list = new string [number_colleges];
	    for(int i = 0; i < number_colleges; i++){
            //Enter the College Names for each college choice
	    	cout << "College prospect #" << i + 1<< ": ";
	    	getline(cin, college_list[i]);}
	    //College program you choose to major in
	    cout << "\nWhat is the college program you intend"
	         << " to major in?" << endl; 
        cout << "College major: "; 
        getline(cin, major); 
        student.setMajor(major); 
        //Grade Level Standing you choose to transfer as
        cout << "Choose the grade level standing "
             << "you will be applying for: " << endl << endl; 
        cout << setw(26) << "a. Freshman " << endl; 
        cout << setw(26) << "b. Sophomore" << endl; 
        cout << setw(24) << "c. Junior " << endl; 
        cout << setw(24) << "d. Senior " << endl; 
        cin >> stand;  
        set.setStanding(stand);
        //Enter year student plans on graduating from college
        cout << "Enter the prospected year you "
             << "plan on graduating." << endl; 
        cout << "Graduation year: "; 
        cin >> grad_year; 
        //Graduation year must be between 2014 and 2024
        while (grad_year <= 2013 || grad_year >= 2025){
              cout << "\nThat is an invalid graduation year." << endl; 
              cout << "Enter an appropriate graduation year." << endl; 
              cin >> grad_year; }
        //Set the graduation year
        set2.setGrad(grad_year);  
        ifstream infile; 
        infile.open("Eligibility.txt",ios::in); 
        char c; 
        while (infile.get(c))
        { cout << c; }
        infile.close(); 
        //Number of Members in Household
        cout << "Enter the number of members in your household: "; 
        cin >> house_size; 
        if (house_size < 0){
                       cout << "\nYou cannot have a negative number"
                            << " for household members." << endl; 
                       cout << "Household Size: "; 
                       cin >> house_size; 
                       while (house_size < 0){
                             cout << "Household Size: "; 
                             cin >> house_size;}
                       size.setSize(house_size);}
        size.setSize(house_size);
        cout << "\nHow many members in your household are"
             << " over the \nage of 16 and are currently"
             << " employed?" << endl; 
        cout << "Number of employed members: "; 
        cin >> house_size;
        employed.setSize(house_size);
        if(size < employed){
                cout << "\nyou cannot have more employed members"
                     << "\nthen there are members in your"
                     << " household." << endl; 
                cout << "Number of employed members: "; 
                cin >> house_size; 
                employed.setSize(house_size);
                if (size < employed){
                      cout << "\nYou can't follow directions. "
                           << "\n\nEnd Program..." << endl; 
                      system("PAUSE"); 
                      exit(EXIT_FAILURE);}
                employed.setSize(house_size); }
        cout << endl; 
        cout << "Number of Members in household: " << size.getSize() << "." << endl; 
        cout << "Number of Employed Members: " << employed.getSize() << "." << endl;
        cout << endl; 
        Income2 test(house_size, array); 
        //Input Income for student
        cout << "What is the combined total income for your household?" << endl; 
        cout << "Income: $"; 
        cin >> income; 
        //Set the Student's Income
        set.setIncome(income); 
        //The above string variable will be stored in a binary file		  
    	fstream file("citizenship.txt", ios::out | ios::binary);
    	if(file.fail())
    		cout << "Problem opening the selected file";
    	file.clear();
    	file << introduction << endl;
    	file.clear();
    	file.close();
    	file.open("citizenship.txt", ios::in | ios::binary);
    	if(!file.is_open())
    		cout << "\nFile is not open\n";
    	char character;
    	//File will be read into the program in binary mode
    	while(!file.eof()){
    		character = file.get();
    		cout << character;
    	}
    	file.close();
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);  
    	cout << endl; 
    	cout << "Does the student possess a valid"
    	     << " United States driver's license(y/n)?" << endl;
        cin >> choice;
        if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){ 
    		  cout << "Incorrect response." << endl; 
    	      cout << "Does the student possess a valid"
    		       << " driver's license?" << endl;
    	      cin >> choice; 
    	      cin.ignore(); 
    	      while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
    	      { cout << "That is not a correct response." << endl; 
    	        cout << "Does the student possess a valid"
    		         << " driver's license?" << endl;
    	        cin >> choice;
    	        cin.ignore(); }}
        if(choice == 'y' || choice == 'Y'){ 
    		  cout << "Driver's License Number: ";
    	      cin >> license1; 
    	      char license_a;
    	      while (license1 < 100000 && license1 > 999999)
    	      { cout << "\nIncorrect format." << endl; 
    	        cout << "Driver's License Number(only the digits): ";
    	        cin >> license_a;
    	        cin >> license1;}
    	      set8.setLicense(license1);
    	      cout << "License Number: " << license_a << set8.getLicense() 
    	           << "." << endl;}
        else if (choice == 'n' || choice == 'N'){ 
    			cout << "Do you have documentation to identify"    
    	             << "\nas an American citizen (y/n)?: "; 
    	        cin >> citizen; 
    	        if (citizen != 'y' && citizen != 'Y' && citizen != 'n' && citizen != 'N')
    	        { cout << "Incorrect response." << endl; 
    	          cout << "Do you have documentation to identify"    
    	               << "\nas an American citizen (y/n)?: "; 
    	          cin >> citizen;
    	          while (citizen != 'y' && citizen != 'Y' && citizen != 'n' && citizen != 'N')
    	          { cout << "Do you have documentation to identify"    
    	                 << "\nas an American citizen (y/n)?: "; 
    	            cin >> citizen; }}
                set7.setCitizen(citizen);}
            if (citizen == 'y' || citizen == 'Y')
    	        { cout << "You will need to provide ONE of the"
    	               << "\nfollowing when you submit your application"
    	               << endl << endl; 
    	          cout << "\ta. Birth Certificate" << endl; 
    	          cout << "\tb. Passport" << endl; 
    	          cout << "\tc. Naturalization Certificate" << endl; 
    	          cout << "\td. Certificate of Citizenship" << endl; 
    	          cout << "\n\nWhich one of these documents do"
    	               << "\nyou possess that prove your citizenship?" << endl; 
    	          cout << "Document: "; 
    	          cin >> document; 
    	          while (document != 'a' && document != 'b' && document != 'c' && document != 'd')
    		          { cout << "Incorrect input.\n" << endl; 
    		            cout << cout << "\nWhich one of these documents do"
    		                 << "\nyou possess that prove your citizenship?" << endl; 
    		            cout << "Document: "; 
    		            cin >> document; }
    	            set7.setDocument(document); 
    	            if (document == 'a')
    		            { cout << "You will need to contact the Department\n"
    		                   << "of Health to obtain a copy of your birth certificate." << endl; 
    		              cout << "\nFinancial aid policy requires that you send this copy\n"
    		                   << "to our office along with the submission of this applicaton." << endl; }
    	            else if (document == 'b')
    		            { cout << "Was your passport issued in the United States? "; 
    		              cin >> passport; 
    		              while (passport != 'y' && passport != 'Y' && passport != 'n' && passport != 'N')
    			              { cout << "Incorrect entry." << endl; 
    			                cout << "Was your passport issued in the United States? "; 
    			                cin >> passport; }
    		              if (passport == 'y' || passport == 'Y')
    			              { cout << "Date passport was issued... ";
    			                Passport(day4, month, year); }
    		              else
    			              { cout << "You do not have proper documentation " 
    			                     << "for American \ncitizenship." << endl; }}
    	            else if (document == 'c')
    		            { cout << "What was the date in which your naturalization papers"
    		                   << "\nwere issued? "; 
    		              Passport(day4, month, year);}
    	            else
    		            { cout << "What was the date in which your naturalization papers"
    		                   << "\nwere issued? "; 
    		              Passport(day4, month, year);}}
          else if (citizen == 'n' || citizen == 'N')
              { cout << "What is your country of origin?" << endl; 
                cout << "Country: "; 
                cin >> country;
                cout << "Date in which you established residency"
                     << "\nwithin the United States: " << endl; 
                Passport(day4, month, year); 
                Toefl(first2, second, third, fourth);} 
          else
          	{ cout << "Invalid Entry." << endl; }
              cout << "\n\nIn this next section of the program, you will be"
                   << "\nasked to enter your cumulative grade point average"
                   << "\nfor the previous four academic semesters." << endl; 
              float score[last_years][col], st_ave[last_years], sum = 0;
               Foreign<int> set3[last_years];
               Foreign<int>** set4;
               set4 = new Foreign<int>*[last_years];
               for(int i = 0; i < last_years; i++)
       		   		   set4[i] = new Foreign<int>[col];
               for (int i = 0; i <= last_years - 1; i++){
                   for(int j = 0; j < col; j++){
    				  do{
    	                  cout << endl << "Average GPA for " << i + 1 << " year, "
    	                       << j + 1 << " quarter: "; 
    	                  cin >> score[i][j];
    					}while(score[i][j] < 0.0e0f || score[i][j] > 4.0e0f); 
                         set4[i][j].setScore(score[i][j]); 
                         sum += score[i][j]; }
                   set8.setSum(sum);       
                   st_ave[i] = sum/col;
                   set3[i].setAverage(st_ave[i]); 
                   if (st_ave[i] < 0.0e0f || st_ave[i] > 4.0e0f)
                      cout << "This averaged GPA score is not within the range of 0.1 - 4.0." << endl; 
                   else {
                      sum = 0;                                  
                      cout << endl << endl << setw(45) << "Average GPA for " << i + 1 << " year: " << endl; 
                      cout << setw(53) << set3[i].getAverage() << "." << endl; }} 
               //Calculate addition of the GPA's.
               float total1 = 0.0e0f; 
               for (int i = 0; i < last_years; i++){
                    for (int j = 0; j < col; j++)  
                        total1 = total1 + score[i][j];}
               set8.setTotal(total1); 
                float average1; 
                average1 = total1/(last_years*col); 
                if (average1 <= 0.0e0f){
                   cout << endl << "The grade point average is below the " << endl; 
                   cout << "lowest possible average of a 0." << endl; }
                else if (average1 > 4.0e0f){
                   cout << endl << "This grade point average exceeds the " << endl; 
                   cout << "highest possible score of 4.0." << endl; }
                else{
                   cout << endl << endl << "Cumulative GPA: " << average1 << ".\n" << endl;} 
               //Compute average GPA.
               float product; 
               product = average1*average;
               cout << "Year" << setw(23) << "GPA" << endl; 
               for (int i = 0; i < last_years; i++){
                   cout << i + 1 << " "; 
                    for (int j = 0; j < col; j++)
                        cout << setw(9) << set4[i][j].getScore(); 
                   cout << endl << endl; }
               cout << "GPA per year = "; 
               for (int i = 0; i <= last_years - 1; i++)
                   cout << setw(8) << st_ave[i]; 
               cout << endl; 
        //Display all the information
	    cout << "\n\n\t******Summary Sheet*****\n";
	    cout << "First name: " << student.getFirst() << endl
	         << "Last name: " << student.getLast() << endl;
        cout << "Age: " << set2.getAge() << endl; 
	    cout << "Date of Birth: ";
	    Date::display_date(date_of_birth);
	    cout << "\nSex: ";
	    if(gender == 'M' || gender == 'm')
	    	cout << "Male";
	    else
	    	cout << "Female";
	    cout << "\nSocial Security Number: ";
	    display_social(social_security_number, 0);
	    cout << "\nComplete address: " << address << " "
			 << "\n\t\t  " << student.getCity() << ", "
	         << student.getState() << " " << student.getZip()<< endl;
	    cout << "Phone number: " << phone_number << endl;  
	    cout << "Last High School: " << high_school<< endl;
	    cout << "High School graduation date: ";
	    Date::display_date(hs_graduation);
	    cout << "\nCollege prospects: ";
	    for(int i = 0; i < number_colleges; i++)
			cout << "\n\tChoice #" << i + 1<< ": " << college_list[i];
	    cout << endl; 
	    cout << "Intended College major: " << student.getMajor() << "." << endl; 
	    if (stand == 'a' || stand == 'A'){
                  cout << "You will be applying as" 
                       << " a Freshman transfer." << endl;}  
        else if (stand == 'b' || stand == 'B'){
                  cout << "You will be applying as" 
                       << " a transferring Sophomore." << endl;} 
        else if (stand == 'c' || stand == 'C'){
                  cout << "You will be applying as" 
                       << " a transferring Junior." << endl;} 
        else{
                  cout << "You will be applying as" 
                       << " a Senior transfer." << endl;} 
        cout << "Intended year of graduation: " << set2.getGrad() << "." << endl;
        cout << "Student's household income: $" << set.getIncome() << "." << endl;  
	    cout << "\n\t*************************";
	    cout << "\nIs the above information correct, y/n: ";
	    cin >> is_correct;
	}while(is_correct != 'y' || is_correct != 'Y');  
    Student new_student = Student(first, last, gender, age, date_of_birth, state, city, zip, phone_number);
    cin.ignore();
    cin.get();
    system("PAUSE");
    return EXIT_SUCCESS;
}
//Validates that the zip code will be five digits long
bool data_valid(int lower_range, int upper_range, string data_name, int data){
	if((data >= lower_range) && (data <= upper_range))
		return true;
	else{
		cout << "The " << data_name << " is not valid";
		cout << endl;
		return false;}
}
//String variables must follow specified format in order to run
bool has_symbols(string data){
	for(int i = 0; i < data.length(); i++){
		if(isalnum(data[i]) == false && isspace(data[i]) == false){
			cout << "The input can only have letters";
			cout << "The illegal character: [" << data[i] << "]";
			return true;}
	}
	return false;
}
//Verifies that the phone number will be of certain 
//length of integers
bool phone_valid(std::string phone_number){
	if(phone_number.length() < 9){
		cout << "Phone number is not long enough";
		return false;}
	return true;
}
//Verifies that the phone number qualifies 
//as all integers. 
string clean_phone(std::string phone_number){
	char* new_phone_char = new char[11];
	for(int i = 0; i < (phone_number.length() - 1); i++){
		if(isdigit(phone_number[i]))
			new_phone_char[i] = phone_number[i];}
	new_phone_char[phone_number.length()] = '\0';
	//strcpy(new_phone_char, new_phone_string);
	std::string new_phone_string(new_phone_char);
	return new_phone_string;
}
//Validate the format for the social security number
bool valid_social(string social){
	if(social.length() != 11){
		cout << "Social not in right format";
		return false;}
	return true;
}
//Display the Social Security Number
void display_social(string social_security_number){
	cout << "***-**-";
	for(int i = 7; i < 11; i++)
		cout << social_security_number[i];
}
void display_social(string social_security_number, int dummy){	
	for(int i =0; i < 11; i++)
		cout << social_security_number[i];
}
void Passport(int day4, int month, int year){
    cout << "\nDay: "; 
    cin >> day4; 
    while (day4 < 0 || day4 > 30)
    { cout << "Incorrect Entry." << endl; 
      cout << "Day: "; 
      cin >> day4; }
    cout << "Month: "; 
    cin >> month;
    while (month < 0 || month > 12)
    { cout << "Incorrect Entry." << endl; 
      cout << "Month: "; 
      cin >> month; }
    cout << "Year: "; 
    cin >> year;
    while (year < 2000 || month > 2014)
    { cout << "Incorrect Entry." << endl; 
      cout << "Year: "; 
      cin >> year; }
    Date2(day4, month, year); 
}
void Date2(int d, int m, int y){
     Foreign<int> set8;
     cout << "Date issued: ";  
     set8.setMonth(m);
     set8.getMonth(); 
     cout << " " << d << ", " << y
          << ". " << endl; 
}
void Toefl(int first2 = 0, int second = 0, int third = 0, int fourth = 0){
     int toefl, final;
     int first_add, sec_add, th_add;  
     Foreign<int> set3; 
     Foreign<int> add1, add2, add3; 
     cout << "What was your combined TOEFL score prior to" 
          << "\nestablishing residency: "; 
     cin >> toefl;
     while (toefl < 0 || toefl > 120)
     { cout << "\nIncorrect Entry." << endl;
       cout << "Combined TOEFL score prior to" 
            << " establishing residency: "; 
       cin >> toefl; }
     set3.setToefl(toefl); 
     do{
        cout << "Score for Reading Comprehension Section: "; 
        cin >> first2; 
        while (first2 < 0 || first2 > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Reading Comprehension Section: "; 
          cin >> first2; }
        set3.setFirst(first2); 
        cout << "Score for Writing Section: "; 
        cin >> second;
        while (second < 0 || second > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Writing Section: "; 
          cin >> second; }
        set3.setSecond(second);  
        first_add = first2 + second; 
        add1.setAdd(first_add); 
        cout << "Score for Listening Section: "; 
        cin >> third; 
        while (third < 0 || third > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Listening Section: "; 
          cin >> third; }
        set3.setThird(third); 
        cout << "Score for Speaking Section: "; 
        cin >> fourth; 
        while (fourth < 0 || fourth > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Speaking Section: "; 
          cin >> fourth; }
        set3.setFourth(fourth);
        sec_add = third + fourth; 
        add2.setAdd(sec_add); 
        add3 = add1 + add2;  
        final = first2 + second + third + fourth; 
        if (final != toefl)
        { cout << "The combined score of all sections"
               << "\ndoes not equal the total toefl score"
               << "\nyou previously enter. Therefore your"
               << "\nyour information is incorrect." << endl; }
        }while (final != toefl);
        cout << endl << endl;  
        cout << "Reading Comprehension Score: " << set3.getFirst() << endl; 
        cout << "Writing Section Score: " << set3.getSecond() << endl; 
        cout << "Listening Section Score: " << set3.getThird() << endl; 
        cout << "Speaking Section Score: " << set3.getFourth() << endl; 
        cout << "Total Score: " << add3.getAdd() << endl;
}
 
