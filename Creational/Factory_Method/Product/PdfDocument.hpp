#pragma once

#include "Document.hpp"

class PdfDocument : public Document {
	public:
		virtual ~PdfDocument();
		virtual std::string getType() const;
		virtual void print() const;
};
