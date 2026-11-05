#include <iostream>
using namespace std;

// Yapý tanýmlama
struct ogrenci
{
    int numara;
    int notu;
};

// Mevcut yapý tipine alternatif isim verme
typedef ogrenci ogr;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    // Yapýnýn orijinal ismiyle deðiþken tanýmlama
    ogrenci ogr1 = {101, 80};

    // typedef ile verilen isimle deðiþken tanýmlama
    ogr ogr2 = {102, 90};

    cout << ogr1.numara << " - " << ogr1.notu << endl; // 101 - 80
    cout << ogr2.numara << " - " << ogr2.notu << endl; // 102 - 90

    return 0;
}
