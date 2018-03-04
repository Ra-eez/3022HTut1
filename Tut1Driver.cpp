#include <iostream>
#include "dbEngine.h"
#include "cstdlib"
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

//driver/ main class

int main(void){

   string selection;
   vector<STNMOE001::StudentRecord>studentVector;
   
   //initially read in entries from the database/ txt file
   ifstream ifs("database");
   string line;
   while(getline(ifs, line)){
      istringstream iss(line);
      string a, b, c, d; // a-name b-surname c-studentnumber d-classrecord
      iss >> a >> b >> c >> d;
      STNMOE001::add_student(a,b,c,d,studentVector); //add student to the vector
   }
   
  
   for(;;){ //infinite loop
   
      //menu display
      cout<<"0: Add student\n"
          <<"1: Read database\n"
          <<"2: Save database\n"
          <<"3: Display given student data\n"
          <<"4: Grade student\n"
          <<"q: Quit\n"
          <<"Enter a number (or q to quit) and press return...\n";
          
      cin >> selection;
      system("clear");
      if (selection == "q") break; //terminating condition
      
      else if (selection == "0"){ //add student
      
         string name; string surname; string studentnumber; string classrecord;
         cout << "Enter student's name:\n";
         cin >> name;
         cout << "Enter student's surname:\n";
         cin >> surname;
         cout << "Enter student's studentnumber:\n";
         cin >> studentnumber;
         cout << "Enter student's classrecord:\n";
         cin >> classrecord;
         
         STNMOE001::add_student(name,surname,studentnumber,classrecord,studentVector);

      }
      else if (selection == "1"){ //read database
         cout << "1 selected\n";
         for (int i=0; i<studentVector.size();i++){
            STNMOE001::StudentRecord Student = studentVector[i];
            cout << Student.Name;
         }
      }
      else if (selection == "2"){ //save database
         cout << "2 selected\n";
      }
      else if (selection == "3"){ //display given student
         cout << "3 selected\n";
      }
      else if (selection == "4\n"){ //grade student
         cout << "4 selected";
      }
   }
   
   return 0;
}