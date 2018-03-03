//h file
#ifndef DATABASE_H
#define DATABASE_H
//any includes here
#include <iostream>
#include <vector>

using namespace std;
namespace STNMOE001 {

   struct StudentRecord{
      string Name;
      string Surname;
      string StudentNumber;
      string ClassRecord;
   };
   
   vector<StudentRecord> studentVector;
   
   void add_student(string name, string surname, string studentnumber, string classrecord);

   void read_database(string txtfile);
   
   void update_database(string txtfile);
   
   void display_student_data();
   
   void grade_student();

} 
#endif