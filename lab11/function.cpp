// Programmer: Alain Markus P. Santos-Tankia    Date: 11/1/16
// File: function.cpp                Class: CS1580
// Student Id: 12454208                      Section: B
/*Description
		Contains the functions of the Thanksgiving Inviter
*/
#include "header.h"

void greetings()
{
  cout<<"Welcome to the Thanksgiving Inviter"<<endl;
}
void goodbye()
{
  cout<<"Bye Bye!!"<<endl;
}

int printInvitation()
{
	ifstream fin;
	ofstream fout;
	fin.open("input.txt");
	fout.open("output.dat");
	string instream;
	int numPeople;
	while(getline(fin,instream,';'))//This will read an input. Checks if eof
	{
		fout<<"-----------------------------------------------"<<endl<<endl;
		fout<<"THANKS GIVING DINNER INVITATION"<<endl<<endl;
		fout<<"Dearest "<<instream;
		getline(fin,instream,';');
		fout<<" "<<instream;
		fout<<" we cordially invite you and\nyour family "
		    <<"to the Thanksgiving Dinner on"
		    <<" November 22nd,\nhosted by the Santos-Tankia's.";
		fout<<" We hope to see you soon.";
		getline(fin,instream);//This assumes that is the number at the end
	    numPeople+= atoi(instream.c_str());//Adds up guests
	    fout<<endl<<endl;
	}
	fout.close();
	fin.close();
	return numPeople;
}

void numTurkey(int guests)
{
	ofstream fout;
	fout.open("output2.dat");
	int numTurkey=(guests/8.0)+0.99; 
	//Rounds up no matter what. So 3.1=4;
	fout<<"Total Guest Invited: "<<guests<<endl;
	
	fout<<"#Turkey Needed for Dinner are: "<<numTurkey;
	fout<<"\nHappy Thanks Giving!";
}

