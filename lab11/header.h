// Programmer: Alain Markus P. Santos-Tankia    Date: 11/1/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Header file of Thanksgiving Inviter
		Contains Protoypes.
*/
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>

using namespace std;

void greetings();
/*Description: Greets User.
  Pre: None
  Post: Message outputs to the screen.*/

void goodbye();
/*Description: Sends off User.
 Pre: None
 Post: Message outputs to the screen.*/
int printInvitation();
/*Description: Prints Invitations using name and relation.
 Also returns # of guests;
 Pre: None except appropriate input file ready.
 Post: Prints invitations into output.dat using data from
 input.txt. Adds up guests and returns the number*/
void numTurkey(int guests);
/*Description: Sends off User.
 Pre: None
 Post: Message outputs to the screen.*/

#endif
