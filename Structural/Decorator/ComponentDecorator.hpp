#pragma once
#include "UIComponent.hpp"

class ComponentDecorator : public UIComponent {
	protected:
		UIComponent* component;
	
	public:
		explicit ComponentDecorator(UIComponent* comp)
			: component(comp) {}
	
		~ComponentDecorator() override {
			delete component;
		}
	
		std::string render(int level = 0) const override {
			return component->render(level);
		}
};
