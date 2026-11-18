// \n ile yeni satır oluşturma

#include <iostream>
#include <windows.h>

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	std::cout << "Satır 1\nSatır 2\n";
	std::cout << "Satır 3";
	
	return 0;
}

