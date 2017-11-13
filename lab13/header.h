// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
  contains prototypes of Change The Box Dimension!
  and the box class declaration. Not the member functions
*/
#ifndef HEADER_H
#define HEADER_H
#include <iostream>

class box
{
  private:
    int height, width;
  public:
    box();
    box(int h, int w);
    void showDimension();
    box operator + (box op2);
    box operator - (box op2);
    box operator = (box op2);
    box operator++();
 };

using namespace std;

void greetings();
/*Description: Greets User.
  Pre: None
  Post: Message outputs to the screen.*/

void goodbye();
/*Description: Sends off User.
 Pre: None
 Post: Message outputs to the screen.*/

#endif
