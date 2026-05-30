#pragma once
#include <string>

class UIComponent {
	public:
		virtual ~UIComponent() = default;
		virtual std::string render(int level = 0) const = 0;
};
