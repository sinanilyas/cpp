#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    typedef int tamsayi;

    int sayi1 = 10;
    tamsayi sayi2 = 20;

	// tamsayi, int veri tipinin alternatif ismidir.
	// Farklý veri tipleri olmadýklarý için aralarýnda
	// tip dönüþümü yapýlmasýna gerek yoktur.
    int toplam1 = sayi1 + sayi2;
    tamsayi toplam2 = sayi1 + sayi2;
    
    cout << toplam1 << endl;
    cout << toplam2 << endl;

    return 0;
}
