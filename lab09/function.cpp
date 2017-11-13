// Programmer: Alain Markus P. Santos-Tankia    Date: 10/18/16
// File: function.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Contains the functions of the Student Database
*/
#include "header.h"

void greetings()
{
  cout<<"Welcome to the Student Database"<<endl;
}
void goodbye()
{
  cout<<"Bye Bye!!"<<endl;
}

void inputStudentDatabase(student studentDatabase[])
{
  for(int i=0;i<studentSize;i++)
  {
    inputStudentInfo(studentDatabase[i].roll,
      studentDatabase[i].marks);
  }
}

void inputStudentInfo(int & roll,int & marks)
{
  cout<<"ID of the student: ";cin>>roll;
  cout<<"Marks for Student "<<roll<<": ";cin>>marks;
  cout<<endl;
}
//Marks
int maxMark(student studentDatabase[])
{
  int maxMark=studentDatabase[0].marks;
  for (int i = 1; i < studentSize; i++)
  {
    // If max is lower than current roll iteration
    if(maxMark<studentDatabase[i].marks)
    {
      //replace oldMax with newMax
      maxMark=studentDatabase[i].marks;
    }
  }
  return maxMark;
}
int minMark(student studentDatabase[])
{
  int minMark=studentDatabase[0].marks;
  for (int i = 1; i < studentSize; i++)
  {
    // If oldMin is greater than current roll iteration
    if(minMark>studentDatabase[i].marks)
    {
      //replace oldMin with newMin
      minMark=studentDatabase[i].marks;
    }
  }
  return minMark;
}
float avgMark(student studentDatabase[])
{
  float totalMark,avgMark;
  for (int i = 0; i < studentSize; i++)
  {
    //Adds current mark to total
    totalMark+=studentDatabase[i].marks;
  }
  avgMark=totalMark/studentSize;
  return avgMark;
}
