// Programmer: Alain Markus P. Santos-Tankia    Date: 10/4/16
// File: header_name.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	The header file of the swap value functions
*/
#ifndef HEADER_NAME_H
#define HEADER_NAME_H

#include <iostream>
using namespace std;

//Description: Greets User.
//Pre: None
//Post: Message outputs to the screen.
void greet();
void getInput (int & number1, int & number2);
//Description: Greets User.
//Pre: Two int numbers
//Post: Stores two inputs from user into
//      the number1 and number2
void swap(int & number1, int & number2);
//Description: Greets User.
//Pre: Two int numbers
//Post: Outputs message of numbers preswap. Swaps numbers
//		Outputs  message of numbers postswap.
void signoff();
//Description: Signs off User.
//Pre: None
//Post: Message outputs to the screen.

#endif
