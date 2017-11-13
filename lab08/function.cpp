// Programmer: Alain Markus P. Santos-Tankia    Date: 10/11/16
// File: function.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Contains the functions of the centroid calculator
*/
#include "header.h"

void greetings()
{
  cout<<"Welcome to the centroid calculator..."<<endl;
	return;
}
void goodbye()
{
  cout<<"Bye Bye!!"<<endl;
	return;
}

void getPoint(point & a,point & b,point & c)
{
	cout<<"Enter Co-ordinates for Point A: ";
	cin>>a.x;
	cin>>a.y;
	cout<<"Enter Co-ordinates for Point B: ";
	cin>>b.x;
	cin>>b.y
	;cout<<"Enter Co-ordinates for Point C: ";
	cin>>c.x;
	cin>>c.y;
	return;
}

void outputPoints(point a,point b,point c)
{
	cout<<"Point A is ("<<a.x
	    <<","<<a.y<<")."<<endl;
  cout<<"Point B is ("<<b.x
			<<","<<b.y<<")."<<endl;
	cout<<"Point C is ("<<c.x
			<<","<<c.y<<")."<<endl;
	return;
}
