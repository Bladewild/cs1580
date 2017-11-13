// Programmer: Alain Markus P. Santos-Tankia    Date: 10/25/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
 Main of Name Encrypter.
 Encrypts the first and last names given
 by the user. Outputs it on the screen.
 Note: I will Use "Marky Santos" as my input
*/

#include "header.h"

int main()
{
  char name [30];
  
  greetings();
  getInput(name);
  encrypt(name);
  showOutput(name);
  goodbye();
  return 0;

}
