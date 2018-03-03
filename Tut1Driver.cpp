#include <iostream>
#include "dbEngine.h"
#include "cstdlib"
using namespace std;

int main(){

   string selection;
  
   for(;;){
   
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
      
      else if (selection == "0"){
         cout << "0 selected\n";
      }
      else if (selection == "1"){
         cout << "1 selected\n";
      }
      else if (selection == "2"){
         cout << "2 selected\n";
      }
      else if (selection == "3"){
         cout << "3 selected\n";
      }
      else if (selection == "4\n"){
         cout << "4 selected";
      }
   }
   
   return 0;
}