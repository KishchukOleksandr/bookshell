#include "author.h"
#include <iostream>

using namespace std;

Author::Author(const string &fName, const string &sName) 
	: firstName{fName}, secondName{sName}
{
	cout << "New author" << firstName << " " << secondName << " is created";	
}
