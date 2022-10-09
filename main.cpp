#include <iostream>

int add(int a, int b) {
	return a + b;
}

int main() {
	std::cout << "Hello, World!\n";

	int c = add(2, 3);
	std::cout << "C = " << c << "\n";

	return 0;
}
