// Programmer: Alain Markus P. Santos-Tankia    Date: 10/18/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
 Makes a Student Database out of an array of students.
 Displays the max,min,avg marks at the end; 
*/

#include "header.h"

int main()
{
  float max,min,avg;
  student studentDatabase [studentSize];

  greetings();
  inputStudentDatabase(studentDatabase);
  max=maxMark(studentDatabase);
  min=minMark(studentDatabase);
  avg=avgMark(studentDatabase);
  print(max,min,avg);
  goodbye();
  return 0;

}
