#include <string>
#include <iostream>

const int NUM_OF_ALPHABET = 'Z' - 'A' + 1;

int main(int argc, char *argv[]) {
	std::string cipher;
	std::getline(std::cin, cipher);
	std::cout << "KEY | " << cipher << std::endl;
	for (int key = 1; key < NUM_OF_ALPHABET; ++key) {
		std::cout.width(3);
		std::cout << key << " | ";
		for (int i = 0; i < cipher.length(); ++i) {
			char c = cipher.at(i);
			if (c >= 'A' && c <= 'Z') {
				std::cout.put((c - 'A' + key) % NUM_OF_ALPHABET + 'A');
			} else if (c == ' ') {
				std::cout.put(c);
			} else {
				std::cout.put('-');
			}
		}
		std::cout << std::endl;
	}
	
	return 0;
}