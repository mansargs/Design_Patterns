#pragma once

#include "Document.hpp"

class DocumentFactory {
	public:
		virtual ~DocumentFactory();
		virtual Document* createDocument() const = 0;
};

