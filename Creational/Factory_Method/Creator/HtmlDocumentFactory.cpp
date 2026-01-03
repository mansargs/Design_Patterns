#include "HtmlDocumentFactory.hpp"
#include "HtmlDocument.hpp"

HtmlDocumentFactory::~HtmlDocumentFactory() {}

Document* HtmlDocumentFactory::createDocument() const {
	return new HtmlDocument();
}
