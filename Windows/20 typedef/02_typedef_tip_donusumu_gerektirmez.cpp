#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    typedef int tamsayi;

    int sayi1 = 10;
    tamsayi sayi2 = 20;

	// tamsayi, int veri tipinin alternatif ismidir.
	// Farklı veri tipleri olmadıkları için aralarında
	// tip dönüşümü yapılmasına gerek yoktur.
    int toplam1 = sayi1 + sayi2;
    tamsayi toplam2 = sayi1 + sayi2;
    
    cout << toplam1 << endl;
    cout << toplam2 << endl;

    return 0;
}
