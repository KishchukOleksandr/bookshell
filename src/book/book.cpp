#include "book.h"
#include <iostream>

Book::Book() : Issue("noname book")
{
	std::cout << "Book - default ctor\n";
}


Book::Book(const std::string &name)
{
	std::cout << "Book - string ctor\n";
}
