#include <iostream>
#include "issue.h"
#include "book.h"

using namespace std;

int main(int argc, char *argv[])
{
	cout << "Wellcome to bookshell!!!\n";
	Issue *myIssue = new Issue();
	cout << myIssue->Name() << endl;
	Book *myBook = new Book();
	cout << myBook->Name() << endl;
	return 0;
}

