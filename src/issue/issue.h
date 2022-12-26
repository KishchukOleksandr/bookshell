#ifndef __ISSUE__
#define __ISSUE__

#include <string>

class Issue
{
private:
	std::string name;
public:
	Issue();
	Issue(const std::string &name);
	~Issue();
	void Name(const std::string &name);
	const std::string& Name() const;	
};
#endif
