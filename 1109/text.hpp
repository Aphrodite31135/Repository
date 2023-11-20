#ifndef text_hpp
#define text_hpp

#include <stdio.h>
#include <iostream>
#include <string>

class Text {
	std::string text;
public :
	Text(const std::string & t);
	std::string get() const;
};

#endif // !text_hpp
