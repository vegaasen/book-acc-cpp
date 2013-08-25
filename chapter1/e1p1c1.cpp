#include <iostream>;
#include <string>;

int main() {
	std::cout << "Please enter your first name:";

	std::string yourName;
	std::cin >> yourName;

	std::cout << "Hello Mr/Mrs." + yourName + "!" << std::endl;
	return 0;
}
