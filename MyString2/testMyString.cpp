//====================
//Madi Slocum
//Due: March 1st
//MyString Programming assignment 5
//====================

#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;


int main()
{


	//Testing Constructors
//============================================
	MyString s1; //calls default constructor
	MyString s2("Madi"); //constructor that takes char* parameter


	cout << "Before s1/s2 Assignment" << endl;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	s1 = s2;
	cout << "After s1 = s2 Assignment" << endl;
	cout << "s1= " << s1 << endl;
	cout << "s2= " << s2 << endl;
	s1 = s1;
	cout << "After s1=s1 Assignment" << endl;
	cout << "s1 = " << s1 << endl;


	//============================================

	MyString s3(s2); //copy constructor to copy s2...calls copy constructor
	cout << "s3  = " << s3 << endl;

	s1 = s2 = s3;
	cout << "After s1=s2=s3 Assignment" << endl;
	cout << "s1 = " << s1 << endl;
	//============================================

	char a[] = "Hello"; //
	MyString s4(a); //copy constructor to copy a
	cout << "char a is copied to s4" << endl;
	cout << "s4 = " << s4 << endl;

	//============================================
	//calling the overloaded + operator
	MyString s5;
	s5 = s1 + s2;
	cout << "s5 = s1 + s2;" << endl;
	cout << " s5 = " << s5 << endl;
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;

	//==========================================
	//Overloaded << output operator

	cout << s2 << endl;

	//=================
	//overloaded ==operator
	bool stats;
	if (stats = true)
	{
		cout << "EQUAL! " << endl;
	}


	return 0;
}
