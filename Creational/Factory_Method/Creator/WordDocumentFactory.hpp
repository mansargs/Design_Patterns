#pragma once

#include "DocumentFactory.hpp"

class WordDocumentFactory : public DocumentFactory {
	public:
		virtual ~WordDocumentFactory();
		virtual Document* createDocument() const;
};
