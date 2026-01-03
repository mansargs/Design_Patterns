#pragma once

#include "DocumentFactory.hpp"

class HtmlDocumentFactory : public DocumentFactory {
	public:
		virtual ~HtmlDocumentFactory();
		virtual Document* createDocument() const;
};
