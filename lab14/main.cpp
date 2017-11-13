// Programmer: Alain Markus P. Santos-Tankia    Date: 11/29/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Adds or multiplies two ints or two doubles.
*/
#include "header.h"

int main()
{

  greetings();

  calc <int> calcInt;
  calc <double> calcDouble;
  int operation= 0,userInput;
  int int1,int2; double double1,double2;
  do
  {
    cout<<"Press 1 to Add, 2 to multiply, Anything else to exit: ";
    cin>>userInput;
    if(userInput==1)//ADD
    {
      operation++;
      cout<<"Press 1 to Add Integer, 2 to Add Double: ";
      cin>>userInput;
      if(userInput==1)
      {
        cout<<"Provide Value1 and Value2: ";cin>>int1;cin>>int2;
        cout<<"Adding "<<int1<<" and "<<int2<<" you get: "
            <<calcInt.add(int1,int2)<<endl;
   	cout<<"----------------------------------------";
      }
      else if(userInput==2)
      {
        cout<<"Provide Value1 and Value2: ";cin>>double1;cin>>double2;
        cout<<"Adding "<<double1<<" and "<<double2<<" you get: "
            <<calcDouble.add(double1,double2)<<endl;
        cout<<"----------------------------------------";
      }
    }
    else if(userInput==2)//MULTIPLY
    {
      operation++;
      cout<<"Press 1 to Multiply Integer, 2 to Multiply Double: ";
      cin>>userInput;
      if(userInput==1)
      {
    	cout<<"Provide Value1 and Value2: ";cin>>int1;cin>>int2;
   	cout<<"Adding "<<int1<<" and "<<int2<<" you get: "
   	    <<calcInt.multiply(int1,int2)<<endl;
   	cout<<"----------------------------------------";
      }
      else if(userInput==2)
      {
        cout<<"Provide Value1 and Value2: ";cin>>double1;cin>>double2;
     	cout<<"Adding "<<double1<<" and "<<double2<<" you get: "
    	    <<calcDouble.multiply(double1,double2)<<endl;
   	cout<<"----------------------------------------";
      }
    }
    cout<<endl;
  }while(userInput==1 || userInput==2);
  cout<<"Total Operation: "<<operation;
  cout<<endl;
  goodbye();

  return 0;

}
