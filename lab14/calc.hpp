// Programmer: Alain Markus P. Santos-Tankia    Date: 11/29/16
// File: calc.hpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Contains the member functions of template calc class.
*/
#include "header.h"

template <class T> 
T calc<T>::multiply(T x,T y)
{
  return x*y;
} //Multiplies two numbers

template <class T> 
T calc<T>::add(T x,T y)
{
  return x+y;
} //Adds two numbers
