#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
void Date(int, int, int); 
void Passport(int, int, int); 
void Toefl(int, int, int, int); 
int main(int argc, char *argv[]){
    ifstream infile;
	infile.open("citizenship.txt",ios::in);
	char czn = czn;
	while(infile.get(czn))
    {cout << czn;}
	infile.close();
	cout << endl;
    int license, first, second;
    int third, fourth, total;  
    int day, month, year; 
	char choice, citizen, document; 
	char passport;
	string country; 
	cout << endl; 
	cout << "Does the student possess a valid"
	     << " driver's license?" << endl;
    cin >> choice;
    if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
    { cout << "Incorrect response." << endl; 
      cout << "Does the student possess a valid"
	       << " driver's license?" << endl;
      cin >> choice; 
      while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
      { cout << "That is not a correct response." << endl; 
        cout << "Does the student possess a valid"
	         << " driver's license?" << endl;
        cin >> choice; }}
    if(choice == 'y' || choice == 'Y')
    { cout << "Driver's License Number: ";
      cin >> license;  
      while (license < 100000 && license > 999999)
      { cout << "\nIncorrect format." << endl; 
        cout << "Driver's License Number: ";
        cin >> license;}
      cout << "License Number: " << license 
           << "." << endl;}
      else if (choice == 'n' || choice == 'N')
      { cout << "Do you have documentation to identify"    
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
            cin >> citizen; }}}
        if (citizen == 'y' || citizen == 'Y')
        { cout << "a. Birth Certificate" << endl; 
          cout << "b. Passport" << endl; 
          cout << "c. Naturalization Certificate" << endl; 
          cout << "d. Certificate of Citizenship" << endl; 
          cout << "\nWhich one of these documents do"
               << "\nyou possess that prove your citizenship?" << endl; 
          cout << "Document: "; 
          cin >> document; 
          while (document != 'a' && document != 'b' && document != 'c' && document != 'd')
          { cout << "Incorrect input.\n" << endl; 
            cout << cout << "\nWhich one of these documents do"
                 << "\nyou possess that prove your citizenship?" << endl; 
            cout << "Document: "; 
            cin >> document; }
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
                Passport(day, month, year); }
              else
              { cout << "You do not have proper documentation " 
                     << "for American \ncitizenship." << endl; }}
            else if (document == 'c')
            { cout << "What was the date in which your naturalization papers"
                   << "\nwere issued? "; 
              Passport(day, month, year);}
            else
            { cout << "What was the date in which your naturalization papers"
                   << "\nwere issued? "; 
              Passport(day, month, year);}}
          else if (citizen == 'n' || citizen == 'N')
          { cout << "What is your country of origin?" << endl; 
            cout << "Country: "; 
            cin >> country;
            cout << "Date in which you established residency"
                 << "\nwithin the United States: " << endl; 
            Passport(day, month, year); 
            Toefl(first, second, third, fourth);} 
          else
          { cout << "Invalid Entry." << endl; }
    system("PAUSE");
    return EXIT_SUCCESS;
}
void Passport(int day, int month, int year){
    cout << "\nDay: "; 
    cin >> day; 
    while (day < 0 && day > 30)
    { cout << "Incorrect Entry." << endl; 
      cout << "Day: "; 
      cin >> day; }
    cout << "Month: "; 
    cin >> month;
    while (month < 0 && month > 12)
    { cout << "Incorrect Entry." << endl; 
      cout << "Month: "; 
      cin >> month; }
    cout << "Year: "; 
    cin >> year;
    while (year < 2000 && month > 2014)
    { cout << "Incorrect Entry." << endl; 
      cout << "Year: "; 
      cin >> year; }
    Date(day, month, year); 
}
void Date(int d, int m, int y){
     string mon; 
     if (m == 1)
        mon = "January"; 
     else if (m == 2)
        mon = "February"; 
     else if (m == 3)
        mon = "March"; 
     else if (m == 4)
        mon = "April"; 
     else if (m == 5)
        mon = "May";
     else if (m == 6)
        mon = "June";
     else if (m == 7)
        mon = "July"; 
     else if (m == 8)
        mon = "August"; 
     else if (m == 9)
        mon = "September"; 
     else if (m == 10)
        mon = "October"; 
     else if (m == 11)
        mon = "November"; 
     else 
        mon = "December"; 
     cout << "Date issued: "
          << mon << " " << d << ", " << y
          << ". " << endl; 
}
void Toefl(int first, int second, int third, int fourth){
     int toefl, final; 
     cout << "What was your combined TOEFL score prior to" 
          << "\nestablishing residency: "; 
     cin >> toefl;
     while (toefl < 0 && toefl > 90)
     { cout << "\nIncorrect Entry." << endl;
       cout << "Combined TOEFL score prior to" 
            << " establishing residency: "; 
       cin >> toefl; }
     do{
        cout << "Score for Reading Comprehension Section: "; 
        cin >> first; 
        while (first < 0 && first > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Reading Comprehension Section: "; 
          cin >> first; }
        cout << "Score for Writing Section: "; 
        cin >> second;
        while (second < 0 && second > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Writing Section: "; 
          cin >> second; } 
        cout << "Score for Listening Section: "; 
        cin >> third; 
        while (third < 0 && third > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Listening Section: "; 
          cin >> third; }
        cout << "Score for Speaking Section: "; 
        cin >> fourth; 
        while (fourth < 0 && fourth > 30)
        { cout << "Incorrect Entry." << endl; 
          cout << "Score for Speaking Section: "; 
          cin >> fourth; }
        final = first + second + third + fourth; 
        }while (final != toefl);
        cout << endl << endl;  
        cout << "Reading Comprehension Score: " << first << endl; 
        cout << "Writing Section Score: " << second << endl; 
        cout << "Listening Section Score: " << third << endl; 
        cout << "Speaking Section Score: " << fourth << endl; 
        cout << "Total Score: " << final << endl;
}
         
        
            
