#include "dbEngine.h"
using namespace std;

//.cpp file for dbEngine that defines all the methods instantiated in the header file

//add student method
void STNMOE001::add_student(string name, string surname, string studentnumber, string classrecord, vector<StudentRecord>&studentVector){

   StudentRecord newPerson = {name,surname,studentnumber,classrecord};
   studentVector.push_back(newPerson);
   }
