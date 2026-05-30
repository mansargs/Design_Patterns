#pragma once
#include "ComponentDecorator.hpp"
#include "Indent.hpp"

class ShadowDecorator : public ComponentDecorator {
	public:
		explicit ShadowDecorator(UIComponent* comp)
			: ComponentDecorator(comp) {}
	
		std::string render(int level = 0) const override {
			return indent(level) + "<div class='shadow'>\n"
				 + ComponentDecorator::render(level + 1)
				 + indent(level) + "</div>\n";
		}
};
