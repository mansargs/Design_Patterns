#pragma once
#include <string>

inline std::string indent(int level) {
	return std::string(level * 2, ' ');
}
