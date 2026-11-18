#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Turkish");

	/* Farklý sayý sistemlerindeki sabit sayýlar aritmetik iþlemlerde de kullanýlabilir. */

	int toplam = 0xA + 0b1010 + 012 + 10; // 10 + 10 + 10 + 10

    cout << toplam << endl; // 40

	return 0;
}
