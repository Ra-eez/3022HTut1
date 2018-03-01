//h file
#ifndef DATABASE_H
#define DATABASE_H
//any includes here
namespace STNMOE001 {

   void add_student(string name, string surname, string studentnumber, string classrecord);

   struct StudentRecord{
      string Name;
      string Surname;
      string StudentNumber;
      string ClassRecord;
   };

} 
#endif