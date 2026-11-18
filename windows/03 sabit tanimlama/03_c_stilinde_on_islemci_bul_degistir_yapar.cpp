#include <iostream>

/* C stili sabit tanýmlamada;
 * Veri tipi belirtilmez.
 * = operatörü ile deðer atama iþlemi yapýlmaz.
 * Tanýmlamanýn sonuna noktalý virgül (;) konulmaz.
 * Sabit isimleri genellikle büyük harflerle yazýlýr.
 *
 * #define komutu, öniþlemciye derleme öncesinde
 * kod içerisinde geçen KARAKTER ifadelerini
 * 'A' ile deðiþtirmesini söyler. */
#define KARAKTER 'A'

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	cout << KARAKTER << endl;

	return 0;
}

