// Programmer: Alain Markus P. Santos-Tankia    Date: 10/11/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
  User inputs 3 points. Displays these 3 points,
  calculates and displays
*/

#include "header.h"

int main()
{
  //Declarations
  point a,b,c;

  //Body
  greetings();
  getPoint(a,b,c);
  outputPoints(a,b,c);
  displayCenter(a,b,c);
  goodbye();
  return 0;

}
