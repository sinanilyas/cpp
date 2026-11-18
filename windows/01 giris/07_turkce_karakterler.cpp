#include <iostream>
#include <windows.h>

int main(int argc, char** argv) {
	// Türkçe karakterlerin düzgün görüntülenmesi için
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	std::cout << "Yazdığım ilk C++ programı.";
	
	return 0;
}

