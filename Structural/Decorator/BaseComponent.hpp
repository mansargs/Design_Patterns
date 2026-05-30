#pragma once
#include "UIComponent.hpp"
#include "Indent.hpp"

class BaseComponent : public UIComponent {
	private:
		std::string text;
	
	public:
		explicit BaseComponent(std::string t)
			: text(std::move(t)) {}
	
		std::string render(int level = 0) const override {
			return indent(level) + "<div>" + text + "</div>\n";
		}
};
