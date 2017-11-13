// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: student.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
   The student class functions
*/
#include "header.h"

Student::Student()
{
  marks=60;
}
void Student::editMarks(int num, int flag)
{
  //flag=0 DECREASE,flag=1 increase
  if(flag)
    marks+=num;
  else
    marks-=num;
}
void Student::showMarks()
{
  cout<<marks;
}
