#pragma once

#include "Document.hpp"

class WordDocument : public Document {
	public:
		virtual ~WordDocument();
		virtual std::string getType() const;
		virtual void print() const;
};
