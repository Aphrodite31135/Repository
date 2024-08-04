#include <string>
#include <vector>
#include <iostream>
#include "text.hpp"

int main() {
	std::vector<Text*> texts{
		new Text("Wow")
	};
	for (auto t : texts)
		std::cout << t->get() << std::endl;
}