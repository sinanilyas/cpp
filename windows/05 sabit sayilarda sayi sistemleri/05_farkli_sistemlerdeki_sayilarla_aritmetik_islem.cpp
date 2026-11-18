#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	/* Farklı sayı sistemlerindeki sabit sayılar aritmetik işlemlerde de kullanılabilir. */

	int toplam = 0xA + 0b1010 + 012 + 10; // 10 + 10 + 10 + 10

    cout << toplam << endl; // 40

	return 0;
}
