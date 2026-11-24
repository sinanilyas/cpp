#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << (3 < 5) << endl; // 1
	cout << boolalpha << (3 < 5) << endl; // true
	
	return 0;
}

