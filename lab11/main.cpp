// Programmer: Alain Markus P. Santos-Tankia    Date: 11/1/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
   Thanksgiving Inviter main.
   Prints out invitations to output.dat.
   Prints out # of guests and Turkey needed. 
*/
#include "header.h"

int main()
{
  ofstream fout;
  ifstream fin;
  greetings();
  int numPeople=printInvitation();
  cout<<"Printed the Invites!"<<endl;
  numTurkey(numPeople);
  cout<<"Printed the number of turkey you needed!"<<endl;
  
  goodbye();
  
  return 0;

}
