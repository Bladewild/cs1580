// Programmer: Alain Markus P. Santos-Tankia    Date: 11/8/16
// File: main.cpp                               Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
   Student Info!
   Shows name and initial marks.
   User modifies the marks until he exits.
   Shows final marks
*/
#include "header.h"

int main()
{

  greetings();


  Student s1;
  s1.name="Marky Santos-Tankia";
  cout<<"Your Name: "<<s1.name<<endl;
  cout<<s1.name<<" your initial marks: ";
  s1.showMarks(); cout<<endl;

  int userInputEdit, userInputModify;
  int modify;
  do
  {
    cout<<"---> Press 1 if you want to edit"
        <<" marks or press anything if u want"
        <<" to exit...";
    cin>>userInputEdit;
    if(userInputEdit==1)
    {
      cout<<" Press 1 again if you want to increase"
          <<" marks or press anything if u want to decrease...";
      cin>>userInputModify;
      if(userInputModify==1)
      {
        cout<<"How much do you want to increase...";
        cin>>modify;
        s1.editMarks(modify,true);
      }
      else
      {
        cout<<"How much do you want to decrease...";
        cin>>modify;
        s1.editMarks(modify,false);
      }
    }
  }while(userInputEdit==1);

  cout<<"After inc/dec your marks become: ";
  s1.showMarks();
  cout<<endl;
  goodbye();

  return 0;

}
