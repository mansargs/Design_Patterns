#include "WordDocumentFactory.hpp"
#include "WordDocument.hpp"

WordDocumentFactory::~WordDocumentFactory() {}

Document* WordDocumentFactory::createDocument() const {
	return new WordDocument();
}
