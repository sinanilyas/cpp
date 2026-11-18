// endl ile yeni satır oluşturma

#include <iostream>
#include <windows.h>

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	std::cout << "Satır 1" << std::endl;
	std::cout << "Satır 2" << std::endl;
	
	return 0;
}

