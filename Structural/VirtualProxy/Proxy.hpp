#pragma once

#include "RealObject.hpp"

class ImageProxy : public Image {
	private:
		std::string filename;
		RealImage* img = nullptr;
	public:
		explicit ImageProxy(std::string file) : filename(std::move(file)) {}

		void display() override {
			if (!img)
				img = new RealImage(filename);
			img->display();
		}

		~ImageProxy() {
			delete img;
		}
};
