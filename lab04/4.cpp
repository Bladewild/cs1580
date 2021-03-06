// Programmer: Alain Markus P. Santos-Tankia    Date: 9/13/16
// File: 4.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
  Takes 5 integers and determines
  whether they are divisible by 3, 2, both
  or even none.  
*/


using namespace std;

#include <iostream>
int main()
{
  int input_num;
  
  //Loops 5 times
  for(int i=0;i<5;i++)
  {
    //Takes a number from user
    cout<<"Enter a Number: ";
    cin>>input_num;cout<<endl;
    //Finds out if number is divisible by 3, 2, both, or none.  
    if(input_num%2==0 && input_num%3==0)
      cout<<input_num<<" is divisible by both 2 and 3."<<endl<<endl;
    else if (input_num%2==0)
      cout<<input_num<<" is divisible by 2 only."<<endl<<endl;
    else if(input_num%3==0)
      cout<<input_num<<" is divisible by 3 only."<<endl<<endl;
    else
      cout<<input_num<<" is divisible by none of them."<<endl<<endl;
  }
  //Program ends here
  cout<<"No more input please... you are done with 5 numbers.";
  return 0;
}
