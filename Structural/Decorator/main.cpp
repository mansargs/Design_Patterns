#include <iostream>
#include "BaseComponent.hpp"
#include "Shadow.hpp"
#include "Animation.hpp"
#include "Border.hpp"

int main() {
	UIComponent* ui =
			new AnimationDecorator(
				new ShadowDecorator(
					new BorderDecorator(
						new BaseComponent("Hello World")
					)
				)
			);
	std::cout << ui->render() << std::endl;
	delete ui;
	return 0;
}





