#pragma once
#include "ComponentDecorator.hpp"
#include "Indent.hpp"

class BorderDecorator : public ComponentDecorator {
	public:
		explicit BorderDecorator(UIComponent* comp)
			: ComponentDecorator(comp) {}
	
		std::string render(int level = 0) const override {
			return indent(level) + "<div class='border'>\n"
				 + ComponentDecorator::render(level + 1)
				 + indent(level) + "</div>\n";
		}
};
