#include <iostream>
#include "issue.h"


Issue::Issue() : name{"noname"}
{
	std::cout << "Issue - default ctor" << "\r\n";
}

Issue::Issue(const std::string &name)
{
	this->name = name;
	std::cout << "Issue - string ctor" << "\r\n";
}

Issue::~Issue()
{
	std::cout << "Issue - dtor" << "\r\n";
}

void Issue::Name(const std::string &name)
{
	this->name = name;
}

const std::string& Issue::Name() const
{
	return name;
}
