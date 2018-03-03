#include <iostream>
#include "dbEngine.h"
#include "cstdlib"
using namespace std;

int main(){

   string selection;

   for(;;){
      
      //void clear(void){ system("clear"); } // include cstdlib
      
      cout<<"0: Add student\n"
          <<"1: Read database\n"
          <<"2: Save database\n"
          <<"3: Display given student data\n"
          <<"4: Grade student\n"
          <<"q: Quit\n"
          <<"Enter a number (or q to quit) and press return...\n";
          
      cin>>selection;
      
      if (selection == "q") break;
      
      else if (selection == "1"){
         cout << "1 selected";
      }
      else if (selection == "2"){
         cout << "2 selected";
      }
      else if (selection == "3"){
         cout << "3 selected";
      }
      else if (selection == "4"){
         cout << "4 selected";
      }
      else if (selection == "1"){
         cout << "1 selected";
      }
   }
   return 0;
}