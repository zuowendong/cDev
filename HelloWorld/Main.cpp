#include <iostream>
#include "Log.h"

int Multiply(int a, int b);

int main() {
	Log("Hello World");
	std::cout << Multiply(1, 2) << std::endl;
	std::cin.get();
}