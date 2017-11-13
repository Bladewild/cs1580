// Programmer: Alain Markus P. Santos-Tankia    Date: 10/25/16
// File: function.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Contains the functions of the Name Ecrypter
*/
#include "header.h"

void greetings()
{
  cout<<"Welcome to the Name Encrypter"<<endl;
}
void goodbye()
{
  cout<<"Bye Bye!!"<<endl;
}

void getInput(char name [])
{
  string userInput;
  cout<<"Please enter your first and last name: ";
  cin.getline(name,30);//Must not exceed 30 characters
}
void encrypt(char name[ ])
{
  //65-90 Upper
  //97-122 Lower
  for(int i=0;i<30;i++)
  {
    if(name[i]=='\0')//Checks for Null Terminating character
      break; //Signals end of loop
    else if (isspace(name[i]))
      continue;
    else if(islower(name[i]))
    {
      if(name[i]>120)//Reduced back to 'a'
        name[i]-=26;
      name[i]+=3;
    }
    else if(isupper(name[i]))
    {
      if(name[i]>88)//Reduces back to 'A'
        name[i]-=26;
      name[i]+=3;
    }
  }
}
void showOutput(char name[ ])
{
  cout<<"The encrypted name is ";
  for(int i=0;i<30;i++)
  {
    if(name[i]=='\0')
      break;
    cout.put(name[i]);
  }
  cout<<endl;

}
