// Programmer: Alain Markus P. Santos-Tankia    Date: 10/19/16
// File: header.h                          Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Header file of the Student Database
		Contains Protoypes,structs,etc.
*/
#ifndef HEADER_H
#define HEADER_H

#include <iostream>
using namespace std;

const int studentSize=7;
struct student
{
	int roll;
	int marks;
};


void greetings();
//Description: Greets User.
//Pre: None
//Post: Message outputs to the screen.

void goodbye();
//Description: Sends off User.
//Pre: None
//Post: Message outputs to the screen.

void inputStudentDatabase(student studentDatabase[]);
//Description: Loops array and inputs info for each student
//Pre: An array containing a struct of students
//Post: The struct array of students should be filled by
// 			inputStudentInfo.

void inputStudentInfo(int & roll,int & marks);
//Description: Loops array and inputs info for each student
//Pre: The current iteration of the array of students. It's
//			roll number and mark number are passed by reference.
//Post: The values passed should be modified by the user as
//			they are passed by reference.


int maxMark(student studentDatabase[]);
//Description: Loops and finds the max in studentDatabase
//Pre: the array of studentDatabase;
//Post: Returns the int max mark in studentDatabase;

int minMark(student studentDatabase[]);
//Description: Loops and finds the min in studentDatabase
//Pre: the array of studentDatabase;
//Post: Returns the int min mark in studentDatabase;

float avgMark(student studentDatabase[]);
//Description: Loops array and totals the marks.
//						The total is divided by the number of students.
//Pre: the array of studentDatabase;
//Post: Returns the average marks of studentDatabase;

template<typename T>
void print(T max,T min,T avg)
{
	cout<<"Maximum mark: "<<max<<endl;
	cout<<"Minimum mark: "<<min<<endl;
	cout<<"Average mark: "<<avg<<endl;
	cout<<endl;
}
//Description: Displays max,min,avg,marks;
//Pre: The max,min,avg marks calculated by
//		 maxMark,minMark,avgMark
//Post: Displays Max,min,avg marks on console.

#endif
