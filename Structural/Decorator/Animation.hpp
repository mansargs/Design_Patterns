#pragma once
#include "ComponentDecorator.hpp"
#include "Indent.hpp"

class AnimationDecorator : public ComponentDecorator {
	public:
		explicit AnimationDecorator(UIComponent* comp)
			: ComponentDecorator(comp) {}
	
		std::string render(int level = 0) const override {
			return indent(level) + "<div class='animate'>\n"
				 + ComponentDecorator::render(level + 1)
				 + indent(level) + "</div>\n";
		}
};
