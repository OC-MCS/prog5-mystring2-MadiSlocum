#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;

//Default constructor 
MyString::MyString()
{
	str = new char[1];
	str[0] = '/0';
	//using nullptr gave me an error each time so i resorted to this...
}


//constructor that takes a char* parameter to make own copy
MyString::MyString(const char *s) {

	int length = strlen(s) + 1;
	str = new char[length];
	strcpy_s(str, length, s);

	//copying s to str..str is  the destination
}

//copy constructor
MyString::MyString(const MyString &s) {

	int size = strlen(s.str) + 1;
	str = new char[size];
	strcpy_s(str, size, s.str);
	cout << "Copy Constructor Called" << endl;

}

//Destructor called
MyString::~MyString() {
	cout << "Str is being deleted. Destructor Called." << endl;
	delete[] str;
	str = nullptr;
}

//c_str() getter function for the overloaded output operator
const char* MyString::c_str() const {

	return str;
}


//overloaded operator
ostream& operator<<(ostream &out, const MyString& s)
{
	//ostream var basically allows cout to happen
	out << s.c_str();
	return out;

}


//Overloaded + operator
MyString MyString::operator+(const MyString &s) const
{
	int size1 = strlen(str) + 1;
	int size2 = strlen(s.str) + 1;
	char * str3 = new char[size1 + size2];
	strcpy_s(str3, size1, str);
	strcpy_s(str3 + size1, size2, s.str);
	strcat_s(str3, size1 + size2, s.str);

	return MyString(str3);
}


//Overloaded assignment operator
MyString& MyString::operator=(const MyString &s)
{
	//if ptr points to something delete it
	if (this == &s)
	{
		return *this;
	}

	delete[] str;
	int size = strlen(s.str) + 1;
	str = new char[size];
	strcpy_s(str, size, s.str);

	return *this;
}

//overloaded == operator
bool MyString::operator==(const MyString& s) {

	bool stats;

	if (strcmp(str, s.str) == 0)
	{
		stats = true;
	}

	else
	{
		stats = false;
	}
	return stats;

}
