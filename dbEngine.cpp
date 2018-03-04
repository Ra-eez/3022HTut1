#include "dbEngine.h"
using namespace std;

//.cpp file for dbEngine that defines all the methods instantiated in the header file

//add student method
void STNMOE001::add_student(string name, string surname, string studentnumber, string classrecord, vector<StudentRecord>&studentVector){
   
   //ensure there are no students with the same student number
   int counter = 0; //beocomes 1 if there is someone of the same name already inputted
   for (int i=0; i<studentVector.size();i++){
      STNMOE001::StudentRecord Student = studentVector[i];
      string current = Student.StudentNumber;
      if (current == studentnumber){
         counter = 1;
      }
   }
   if (counter == 0){
      StudentRecord newPerson = {name,surname,studentnumber,classrecord};
      studentVector.push_back(newPerson);
   }
   }
