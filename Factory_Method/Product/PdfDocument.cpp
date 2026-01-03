#include "PdfDocument.hpp"
#include <iostream>

PdfDocument::~PdfDocument() {
	std::cout << "PdfDocument dtor called\n";
}

std::string PdfDocument::getType() const {
	return "PdfDocument";
}

void PdfDocument::print() const {
	std::cout << "This is PdfDocument\n";
}
