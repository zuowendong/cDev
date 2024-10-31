#include <iostream>
#include "Log.h"

int Multiply(int a, int b);

void MultiplyAndLog(int a, int b) {
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}

int main() {
	InitLog();

	int x = 7;
	bool comparisonResult = x == 5;
	if (comparisonResult) {
		Log("Hello World");
	}
	else if (x == 6) {
		Log("x is 6");
	}
	else {
		Log("x is not 5 and 6");
	}



	MultiplyAndLog(2, 4);
	MultiplyAndLog(6, 9);
	MultiplyAndLog(20, 43);

	std::cin.get();
}