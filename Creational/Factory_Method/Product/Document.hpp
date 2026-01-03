#pragma once

#include <string>

class Document {
	public:
		virtual ~Document();
		virtual std::string getType() const = 0;
		virtual void print() const = 0;
};
