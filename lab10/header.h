// Programmer: Alain Markus P. Santos-Tankia    Date: 10/25/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Header file of Name Ecrypter
		Contains Protoypes.
*/
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

void greetings();
/*Description: Greets User.
  Pre: None
  Post: Message outputs to the screen.*/

void goodbye();
/*Description: Sends off User.
 Pre: None
 Post: Message outputs to the screen.*/

void getInput(char name []);
/*Description: Gets the name and stores into name char array
 Pre: the char array.
 Post:Stores the input into char name. Must not exceed 30*/
void encrypt(char name[ ]);
/*Description: Encrypts Data by +3 to each character. *(XYZ)-->(ABC)
 Pre: the char name from getInput
 Post:Encrypts by adding +3 to each character. Loops back to 'a' or 'A'*/
void showOutput(char name[ ]);
/*Description Outputs encrypted name
 Pre: the char name from encrypt function
 Post: Outputs encrypted name*/


#endif
