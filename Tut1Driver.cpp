#include <iostream>
#include "dbEngine.h"
#include "cstdlib"//used for clearing terminal function
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;

//driver/ main class

int main(void){

   //variables
   string selection;
   vector<STNMOE001::StudentRecord>studentVector;
   
   //open file
   ifstream ifs("database");
   string line;
   //parse through each line and enter values into the vector
   while(getline(ifs, line)){
      istringstream iss(line);
      string a, b, c, d; // a-name b-surname c-studentnumber d-classrecord
      iss >> a >> b >> c;
      getline(iss,d);
      STNMOE001::add_student(a,b,c,d,studentVector); //add student to the vector
   }
   ifs.close();//close file
  
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
      system("clear");//clears terminal
      if (selection == "q") break; //terminating condition
      
      //add student
      else if (selection == "0"){
      
         cout << "Add student function selected\n\n";
         string name; string surname; string studentnumber; string classrecord; string ya;
         cout << "Enter student's first name:\n";
         cin >> name;
         cout << "Enter student's surname:\n";
         cin >> surname;
         cout << "Enter student's studentnumber:\n";
         cin >> studentnumber;
         cout << "Enter student's classrecord:\n";
         cin.ignore(256, '\n');
         getline(cin,classrecord);
         
         STNMOE001::add_student(name,surname,studentnumber,classrecord,studentVector);

      }
      //read database
      else if (selection == "1"){
         cout << "Read database function selected\n\n";
         
         for (int i=0; i<studentVector.size();i++){
            STNMOE001::StudentRecord Student = studentVector[i];
            cout << "Student name:    " << Student.Name
                 << "\nStudent surname: " << Student.Surname
                 << "\nStudent number:  " << Student.StudentNumber
                 << "\nClass record:   " << Student.ClassRecord << "\n\n";
         }
      }
      //save database
      else if (selection == "2"){
         cout << "Save database function selected\n\n";
         
         ofstream file;
         file.open("database");
         for (int i=0; i<studentVector.size();i++){
            STNMOE001::StudentRecord Student = studentVector[i];
            string details;
            details = Student.Name + " " + Student.Surname + " " + Student.StudentNumber + " " + Student.ClassRecord + "\n";
            file << details;
         }
         file.close();
               }
      else if (selection == "3"){ //display given student
         cout << "3 selected\nPlease enter the student number:";
         string sn;
         int counter = 0; //when student is found this becomes 1, if student not found then this will indicate so
         cin >> sn;
         for (int i=0; i<studentVector.size();i++){
            STNMOE001::StudentRecord Student = studentVector[i];
            if (Student.StudentNumber == sn){
               cout << Student.Name;
               counter = 1;
            }
         }
         if (counter == 0) (cout << "Student not found");
            
      }
      else if (selection == "4\n"){ //grade student
         cout << "4 selected\nPlease enter the student number:";
         string sn;
         int counter = 0; //when student is found this becomes 1, if student not found then this will indicate so
         cin >> sn;
         for (int i=0; i<studentVector.size();i++){
            STNMOE001::StudentRecord Student = studentVector[i];
            if (Student.StudentNumber == sn){
            //average calcultions and printing here
               cout << Student.Name;
               counter = 1;
            }
         }
         if (counter == 0) (cout << "Student not found");
      }
   }
   
   return 0;
}