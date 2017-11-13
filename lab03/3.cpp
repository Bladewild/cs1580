// Programmer: Alain Markus P. Santos-Tankia    Date: 9/6/16
// File: 3.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
	Calculates the accelaration by finding
	 the change in speed divided by time.
	 Outputs result in float and inteher.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  //Declarations
  float acc,time;
  float Si,Sf;
  
  //Inputs
  cout<< "Welcome to the accelaration calculator.";
  cout<< "\nEnter the initial speed, Final speed, and Time for this increment.\n";
  cout<< "\nInitial Speed (m/s): "; cin>>Si;
  cout<< "Final Speed (m/s): "; cin>>Sf;
  cout<< "Time for this increment(s): "; cin>>time;

  //Calculations
  acc=(Sf-Si)/time;
  
  //Display Final Output
  cout<<"\nAccelaration for the given crieria is "<< acc;
  cout<<"\nAccelaration for the given crieria is "<< static_cast<int>(acc)<<endl;
  return 0;
}

