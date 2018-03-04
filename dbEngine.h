#ifndef DATABASE_H
#define DATABASE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//hfile for dbEngine, defines the namespace for this assignment

namespace STNMOE001 {

   //struct for student details/data
   struct StudentRecord{
      string Name;
      string Surname;
      string StudentNumber;
      string ClassRecord;
   };
   
   //vector used to hold all data
   extern vector<StudentRecord>&studentVector;
   
   //method which adds students to the vector which would then need to be later saved to the textfile/database
   void add_student(string name, string surname, string studentnumber, string classrecord, vector<StudentRecord>&studentVector);

   //reads in a txtfile and uses that information as the information from the database
   void read_database(string txtfile);
   
   //prints all data from the vector to a txtfile
   void update_database(string txtfile);
   
   //prints the student data in the vector to the screen
   void display_student_data();
   
   //prints the average for a student by given student number
   void grade_student();

} 
#endif