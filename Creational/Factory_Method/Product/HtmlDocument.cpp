#include "HtmlDocument.hpp"
#include <iostream>

HtmlDocument::~HtmlDocument() {
	std::cout << "HtmlDocument dtor called\n";
}

std::string HtmlDocument::getType() const {
	return "HtmlDocument";
}

void HtmlDocument::print() const {
	std::cout << "This is HtmlDocument\n";
}
