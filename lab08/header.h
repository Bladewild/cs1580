// Programmer: Alain Markus P. Santos-Tankia    Date: 10/11/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Header file of the centeroid calculator.
		Contains Protoypes,structs,etc.
*/
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
};

void greetings();
//Description: Greets User.
//Pre: None
//Post: Message outputs to the screen.

void goodbye();
//Description: Sends off User.
//Pre: None
//Post: Message outputs to the screen.

void getPoint(point & a,point & b,point & c);
//Description: Asks user for 3 points
//Pre: 3 points, pass by referenec
//Post: Asks user for 3 points(x,y). Stores in the
//      points given.

void outputPoints(point a,point b,point c);
//Description: Displays Points Entered.
//Pre: The three points the user entered previously
//Post: Message outputs points to the screen.

template<typename T>
void displayCenter(T & a,T & b,T & c)
{
	float x,y;
	//These calculate the center point.
	x=(a.x+b.x+c.x)/3.0;
	y=(a.y+b.y+c.y)/3.0;
	//Displays Center
	cout<<endl<<"The centroid for the triangle ABC is "
	    <<"("<<x<<","<<y<<")"<<endl;
	return;
}
//Description: Calculates and displays center point of triangle.
//Pre: The 3 points previously entered
//Post: Outputs the center point of the triangle.

#endif
