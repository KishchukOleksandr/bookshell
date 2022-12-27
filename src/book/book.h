#ifndef __BOOK__
#define __BOOK__

#include "issue.h"

class Book : public Issue
{
public:
	Book();
	Book(const std::string &name);
  ~Book();
		
};
#endif


