// Programmer: Alain Markus P. Santos-Tankia    Date: 11/29/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
  contains prototypes and a class of Add n Multiply!
*/
#ifndef HEADER_H
#define HEADER_H
#include <iostream>

template <class T> 
class calc
{  
  public:
    T multiply(T x,T y);
    T add(T x,T y);
};

#include "calc.hpp"

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
