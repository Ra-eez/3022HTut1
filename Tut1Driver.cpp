#include <iostream>
using namespace std;

int main(){

   string selection;

   cout<<"0: Add student\n"
       <<"1: Read database\n"
       <<"2: Save database\n"
       <<"3: Display given student data\n"
       <<"4: Grade student\n"
       <<"q: Quit\n"
       <<"Enter a number (or q to quit) and press return...\n";
       
   for(;;){
      
      cin>>selection;
      
      if (selection == "q") break;
   }
   return 0;
}