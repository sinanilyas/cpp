#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	cout << sizeof(short) << endl;     // 2
	cout << sizeof(int) << endl;       // 4
	cout << sizeof(long) << endl;      // Windows: 4, Linux ve macOS: 8
	cout << sizeof(long long) << endl; // 8

	return 0;
}

