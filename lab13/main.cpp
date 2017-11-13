// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description

  Declares and initializes 3 boxes.
  Changes The Box Dimension and displays the results.
*/
#include "header.h"

int main()
{

  greetings();

  box b1(10,20);
  box b2(15,30);
  box b3(90,90);
  cout<<"Initial Dimension of Box1, Box2, and Box3..."<<endl;
  cout<<"Box1--";b1.showDimension();
  cout<<"Box2--";b2.showDimension();
  cout<<"Box3--";b3.showDimension();

  cout<<endl;
  b1=b1+b2;
  cout <<"After adding Box1 with Box2 and assigning it at Box1..." <<endl;
  cout<<"Box1--";b1.showDimension();

  cout<<endl;
  b2=++b1;
  cout<<"After Incrementing the dimension"
      <<" of Box1 and assigning it to Box2"<<endl;
  cout<<"Box1--";b1.showDimension();
  cout<<"Box2--";b2.showDimension();

  cout<<endl;
  b1=b3;
  cout<<"After assigning Box3 at Box1..."<<endl;
  cout<<"Box1--";b1.showDimension();

  cout<<endl;
  b2=b1-b2;
  cout<<"After subtracting Box2 from Box1 and assigning it at Box2"<<endl;
  cout<<"Box2--";b2.showDimension();
  cout<<endl;
  goodbye();

  return 0;

}
