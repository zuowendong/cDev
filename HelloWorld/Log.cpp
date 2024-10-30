#include <iostream>
#include "Log.h"

void InitLog() {
	Log("Initialization log");
}

void Log(const char* messgae) {
	std::cout << messgae << std::endl;
}