// Programmer: Alain Markus P. Santos-Tankia    Date: 12/6/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	User enters number greater than 1. Exits if less than 1. Ouputs zero
	operations if user enters 1. Multiplies 3 and add 1 if odd.
	Divides 2 if even. Keeps operating until it reaches 1;
*/
#include "header.h"

int main()
{

  greetings();

  int operation= 0,userInput;
  do
  {
    cout<<"Press a number Greater than 1: ";
    cin>>userInput;
    if(userInput>1)//ADD
    {
      int num= userInput;
      cout<<num<<" ";
      do
      {
        if(num%2==0)//Even
        {
          num/=2;
        }
        else //odd
        {
          num=num*3+1;
        }
        cout<<num<<" ";
        operation++;
      } 
      while(num!=1);
        cout<<"\nTotal Operations: "<<operation<<endl;
        operation=0;
    }
    else if(userInput==1)
    {
    	cout<<"1";
    	cout<<"\nTotal Operations: "<<operation<<endl;
        operation=0;
	}
	
  }while(1<=userInput);
  cout<<endl;
  goodbye();

  return 0;

}
