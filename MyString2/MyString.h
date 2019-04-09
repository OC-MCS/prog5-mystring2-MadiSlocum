#pragma once



class MyString {

private:

	char *str; //pointer to a char


public:

	//default constructor- no arguments
	MyString();
		
	//constructor that takes a char* paramater and initializes it, makes own copy of the c-string passed new memory for pointer to point at
	MyString(const char *s);

	//copy constructor
	MyString(const MyString &s);


	//destructor
	~MyString();


	//returns c-string const pointer
	const char* c_str() const;


	// an overloaded + operator for string 
	MyString operator+(const MyString &s) const;

	//an overloaded assignment operator 
	MyString& operator=(const MyString& s);
	
	//overloaded == operator 
	bool operator==(const MyString& s);
	
};
