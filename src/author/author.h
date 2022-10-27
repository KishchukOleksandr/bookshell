#ifndef __AUTHORH__
#define __AUTHORH__

#include <string>


class Author
{
private:
	std::string firstName;
	std::string secondName;
	std::string bio;
public:
	Author(const std::string &fName, const std::string &sName);
	std::string Bio() const;
	void Bio(const std::string &bio);
	std::string FirstName() const;
	void FirstName(const std::string &fName);
	std::string SecondName() const;
	void SecondName(const std::string &sName);
};

#endif


