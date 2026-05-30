#pragma once

class Component {
	public:
		virtual void show(int indent = 0) const = 0;
		virtual ~Component() = default;
};


