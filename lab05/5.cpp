// Programmer: Alain Markus P. Santos-Tankia    Date: 9/20/16
// File: 5.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
   7 customers are forced to buy items
   randomly chosen by the cashier.
   What they bought are displayed on the console.
   The number of sales for each item is then displayed.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  //Seeds RNG
  srand(time(NULL)); 

  //Declare Variables
  int num_Rand;
  int item_A=0,item_B=0,item_C=0,item_D=0;
  
  //Loops for 7 customers
  for(int i=1;i<=7;i++)
  {
    //Generates random number from 1-4
  	num_Rand= rand()%4+1;	
  	
  	//Assigns random number generated to current customer.
  	//Displays what item customer bought.
  	//Adds to the number of item_X bought.
    switch(num_Rand)
    {
      case 1:
      	cout<<"Customer "<<i<<": "<<num_Rand<<endl;
      	cout<<"Please pick item A"<<endl;
      	cout<<"--------------------"<<endl;
      	item_A++;	
      	break;
      case 2:
      	cout<<"Customer "<<i<<": "<<num_Rand<<endl;
      	cout<<"Please pick item B"<<endl;
      	cout<<"--------------------"<<endl;
      	item_B++;
        break;
      case 3:
      	cout<<"Customer "<<i<<": "<<num_Rand<<endl;
      	cout<<"Please pick item C"<<endl;
      	cout<<"--------------------"<<endl;
      	item_C++;
      	break;
      case 4:
      	cout<<"Customer "<<i<<": "<<num_Rand<<endl;
      	cout<<"Please pick item D"<<endl;
      	cout<<"--------------------"<<endl;
      	item_D++;
      	break;
    }		
    cout<<endl;
  }
  //Displays # bought for each item.
  cout<<"Sale Statistics:"<<endl;
  cout<<"Item A: "<<item_A<<endl;
  cout<<"Item B: "<<item_B<<endl;
  cout<<"Item C: "<<item_C<<endl;
  cout<<"Item D: "<<item_D<<endl;
 
  return 0;
}

