// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Header file of Student Info!
*/
#ifndef HEADER_H
#define HEADER_H

#include <iostream>

using namespace std;
class Student
{
  private:
    int marks;
  public:
    string name;
    Student();
    void editMarks(int num, int flag);
    void showMarks();
};

void greetings();
/*Description: Greets User.
  Pre: None
  Post: Message outputs to the screen.*/

void goodbye();
/*Description: Sends off User.
 Pre: None
 Post: Message outputs to the screen.*/


#endif
