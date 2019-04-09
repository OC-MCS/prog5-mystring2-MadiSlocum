//====================
//Madi Slocum
//Due: March 1st
//MyString Programming assignment 5
//====================

#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;


//overloaded operator
ostream& operator<<(ostream &out, const MyString& s)
{
	//ostream var basically allows cout to happen
	out << s.c_str();
	return out;
};

int main()
{

	//Testing Constructors
//============================================
	MyString s1; //calls default constructor
	MyString s2("Madi"); //constructor that takes char* parameter
	
	
	cout << "Before s1/s2 Assignment" << endl;
	cout << "s1" << s1 << endl;
	cout << "s2" << s2 << endl;
	s1 = s2; //calls copy constructor
	cout << "After s1/s2 Assignment" << endl;
	cout << "s1" << s1 << endl;
	cout << "s2" << s2 << endl;
	s1 = s1;
	cout << "After s1=s1 Assignment" << endl;
	cout << "s1" << s1 << endl;


	//============================================

	MyString s3(s2); //copy constructor to copy s2...calls copy constructor
	cout << "s3" << s3 << endl;

	s1 = s2 = s3;
	cout << "After s1=s2=s3 Assignment" << endl;
	cout << "s1" << s1 << endl;
	//============================================

	char a[] = "Hello"; //
	MyString s4(a); //copy constructor to copy a
	cout << "s4" << s4 << endl;

	//============================================
	//calling the overloaded + operator

	cout << "s3= s1 + s2...s3 = " <<  s1 + s2 << endl; 
	cout << "s1 =" << s1 << endl;
	cout << "s2 = " << s2 << endl;

	//==========================================
	//Overloaded << output operator
	cout << 'madi' << endl;

	return 0;
}
