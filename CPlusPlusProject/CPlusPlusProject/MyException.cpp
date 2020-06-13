#ifndef _MYEXCEPTION_CPP_
#define _MYEXCEPTION_CPP_
#include <exception>

struct MyException : public std::exception
{
	const char* what() const throw()
	{
		return "C++ Exception";
	}
};

#endif