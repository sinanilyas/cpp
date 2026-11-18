// Her cout komutu yeni bir satır oluşturmaz

#include <iostream>
#include <windows.h>

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	std::cout << "Satır 1";
	std::cout << "Satır 2";
	
	return 0;
}

