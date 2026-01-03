#include "PdfDocumentFactory.hpp"
#include "PdfDocument.hpp"

PdfDocumentFactory::~PdfDocumentFactory() {}

Document* PdfDocumentFactory::createDocument() const {
	return new PdfDocument();
}
