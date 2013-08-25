#include <iostream>;
#include <string>;

int main() {
	std::cout << "What's your name? ";
	std::string yourName;
	std::cin >> yourName;

	std::cout << "Greeting. " << yourName << "\nAnd what is yours?";
	std::cin >> yourName;
	std::cout << "Hia!" << yourName << ". Nice too meet you." << std::endl;

	return 0;
}
