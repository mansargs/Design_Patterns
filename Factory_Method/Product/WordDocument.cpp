#include "WordDocument.hpp"
#include <iostream>

WordDocument::~WordDocument() {
	std::cout << "WordDocument dtor called\n";
}

std::string WordDocument::getType() const {
	return "WordDocument";
}

void WordDocument::print() const {
	std::cout << "This is WordDocument\n";
}
