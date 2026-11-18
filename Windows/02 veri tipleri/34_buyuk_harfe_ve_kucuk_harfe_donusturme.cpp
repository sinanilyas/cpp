#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	/* A-Z arasındaki harfler ASCII tablosunda alfabetik sıra ile saklanmaktadır.
	 * Aynı şekilde a-z arasındaki harfler de alfabetik sıralıdır. */
	
	int fark = 'a' - 'A'; // 97-65 = 32
	
	// Herhangi bir büyük harfe 32 eklendiğinde o harfin küçük harfi elde edilir.
	char buyuk1 = 'E';
	char kucuk1 = buyuk1 + fark;
	cout << kucuk1 << endl;
	
	// Herhangi bir küçük harften 32 çıkarıldığında o harfin büyük harfi elde edilir.
	char kucuk2 = 'n';
	char buyuk2 = kucuk2 - fark;
	cout << buyuk2 << endl;
	
	return 0;
}

