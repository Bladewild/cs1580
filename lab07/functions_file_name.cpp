// Programmer: Alain Markus P. Santos-Tankia    Date: 10/4/16
// File: functions_file_name.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Contains the functions that swap the values.
*/
#include "header_name.h"

void greet()
{
  cout<<"Hello!"<<endl;
}

void getInput (int & number1, int & number2)
{
  cout<<"Enter the value for num1: ";cin>>number1;
  cout<<endl<<"Enter the value for num2: ";cin>>number2;
}

void swap(int & number1, int & number2)
{
  cout<<"Before swapping, the value of num1: "<<number1
  <<" and num2: "<<number2<<endl;
  int temp=number1;
  number1=number2;
  number2=temp;
  cout<<"After swapping, the value of num1: "<<number1
  <<" and num2: "<<number2<<endl;
}

void signoff()
{
  cout<<endl<<"Goodbye!";
}
