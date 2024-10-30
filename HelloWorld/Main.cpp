#include <iostream>
#include "Log.h"

int Multiply(int a, int b);

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	InitLog();
	Log("Hello World");

	MultiplyAndLog(2, 4);
	MultiplyAndLog(6, 9);
	MultiplyAndLog(20, 43);

	std::cin.get();
}