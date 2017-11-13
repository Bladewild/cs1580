// Programmer: Alain Markus P. Santos-Tankia    Date: 9/27/16
// File: 6.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Takes positive number for radius.
	Calculates area of circle.
	Outputs both these variables.
*/
#include <iostream>
using namespace std;

//Prototypes
void greet();
float readRadius();
float findArea(float radius);
void printResult(float radius,float area);
void signoff();

const float pi=3.14159265;
int main()
{
  //Declarations
  float radius,area;
  
  greet();
  radius= readRadius();
  area=findArea(radius);
  printResult(radius,area);
  signoff();

  return 0;
}
//Greets user
void greet() {cout<<"Welcome to area calculation."<<endl;}

//Intakes a postive radius and asks again if invalid.
float readRadius()
{
  float radius; 
  do
  {
    cout<<"Please enter a positive radius: ";cin>>radius;
    cout<<endl;  	
  }while(!(radius>0));
  
  return radius;
    
}

//Calculates area
float findArea(float radius){ return pi*radius*radius; }

//Prints radius and circle
void printResult(float radius,float area)
{
  cout<<"The radius of the circle is :"<<radius<<endl;
  cout<<"The area of the circle is   :"<<area<<endl;
}

//Sign off message
void signoff()
{ cout<<endl<<"Have a good day!"<<endl;}

