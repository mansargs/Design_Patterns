#include "Proxy.hpp"

int main () {
	Image* img = new ImageProxy("test.txt");
	std::cout << "start\n";
	img->display();
	img->display();
	delete img;
	std::cout << "end\n";
}
