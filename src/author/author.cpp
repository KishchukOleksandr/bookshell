#include "author.h"
#include <iostream>

using namespace std;

Author::Author(const string &fName, const string &sName) 
	: firstName{fName}, secondName{sName}
{
	cout << "New author" << firstName << " " << secondName << " is created";	
}

string Author::Bio() const
{
	return bio;
}

void Author::Bio(const string &bio)
{
	this->bio = bio;
}
