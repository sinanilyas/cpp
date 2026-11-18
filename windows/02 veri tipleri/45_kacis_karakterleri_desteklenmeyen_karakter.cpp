#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << "Nasılsın\z" << endl; // UYARI: \z diye bir kaçış karakteri yok
	
	return 0;
}

