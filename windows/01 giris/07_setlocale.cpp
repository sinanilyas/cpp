#include <iostream>

int main(int argc, char** argv) {
	// Türkçe karakterlerin düzgün görüntülenmesi için
	setlocale(LC_ALL, "Turkish");
	
	std::cout << "Yazdýðým ilk C++ programý.";
	
	return 0;
}

