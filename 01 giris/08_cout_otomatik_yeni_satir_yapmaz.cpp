// Her cout komutu yeni bir satýr oluþturmaz

#include <iostream>

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	std::cout << "Satýr 1";
	std::cout << "Satýr 2";
	
	return 0;
}

