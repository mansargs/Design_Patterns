#pragma once

#include "Document.hpp"

class HtmlDocument : public Document {
	public:
		virtual ~HtmlDocument();
		virtual std::string getType() const;
		virtual void print() const;
};
