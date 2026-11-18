#include <iostream>
#include <windows.h>

/* C stili sabit tanımlamada;
 * Veri tipi belirtilmez.
 * = operatörü ile değer atama işlemi yapılmaz.
 * Tanımlamanın sonuna noktalı virgül (;) konulmaz.
 * Sabit isimleri genellikle büyük harflerle yazılır.
 *
 * #define komutu, önişlemciye derleme öncesinde
 * kod içerisinde geçen KARAKTER ifadelerini
 * 'A' ile değiştirmesini söyler. */
#define KARAKTER 'A'

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	cout << KARAKTER << endl;

	return 0;
}

