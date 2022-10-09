#include <iostream>

int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mult(int a, int b) {
	return a * b;
}

int main() {
	std::cout << "Hello, World!\n";

	int c = add(2, 3);
	std::cout << "C = " << c << "\n";

	std::cout << (c == 5 ? "Test passed!" : "Test failed!") << "\n";

	return 0;
}
