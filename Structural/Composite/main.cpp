#include "Folder.hpp"
#include "File.hpp"

int main() {
	auto root = std::make_shared<Folder>("root");
	auto file1 = std::make_shared<File>("a.txt", 10);
	auto file2 = std::make_shared<File>("b.txt", 20);
	root->add(file1);
	root->add(file2);
	auto docs = std::make_shared<Folder>("docs");
	auto file3 = std::make_shared<File>("c.txt", 30);
	auto file4 = std::make_shared<File>("d.txt", 40);
	docs->add(file3);
	docs->add(file4);
	root->add(docs);
	std::cout << "=== FULL STRUCTURE ===\n";
	root->show();
	std::cout << "\n=== AFTER REMOVE ===\n";
	root->remove(file1);
	root->show();
	return 0;
}
