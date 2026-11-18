#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	int s1;
	int s2 = 5;
	int s3 = 2124154896;
	
	// Değişkenin boyutu değerinden bağımsızdır
	// Üç değişken de hafızada aynı büyüklükte yer kaplar
	cout << sizeof(s1) << endl
	     << sizeof(s2) << endl
	     << sizeof(s3) << endl;
	
	return 0;
}

