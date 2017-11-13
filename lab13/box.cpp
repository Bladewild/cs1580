// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: box.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Contains the member functions of box class.
*/
#include "header.h"

box::box() //self-explanatory
{
  height=0;
  width=0;
}
box::box(int h, int w) //self-explanatory
{
  height=h;
  width=w;
}
void box::showDimension() //self-explanatory
{
  cout<<"Height: "<<height<<" Width: "<<width<<endl;
}

//**The Parameters of these overloaded operators have to be boxes.**
//Adds the widths of the boxes and overrides calling box's width.
//same with the height;
box box::operator+ (box op2)
{
  width=width+op2.width;
  height=height+op2.height;
  return *this;
}
//Subtracts the widths of the boxes and overrides calling box's width.
//same with the height;
box box::operator - (box op2)
{
  width=width - op2.width;
  height=height - op2.height;
  return *this;
}
//Assigns the calling box object to the paramater passed (anything
//right of the assigment operator).
box box::operator = (box op2)
{
  width=op2.width;
  height=op2.height;
  return *this;
}

//Prefix increment. Adds 1 to width and height of calling box.
box box::operator++()
{
  width++;
  height++;
  return *this;
}
