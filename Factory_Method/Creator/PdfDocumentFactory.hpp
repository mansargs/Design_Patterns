#pragma once

#include "DocumentFactory.hpp"

class PdfDocumentFactory : public DocumentFactory {
	public:
		virtual ~PdfDocumentFactory();
		virtual Document* createDocument() const;
};
