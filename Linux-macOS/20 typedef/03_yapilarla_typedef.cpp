#include <iostream>
using namespace std;

// Yapı tanımlama
struct ogrenci
{
    int numara;
    int notu;
};

// Mevcut yapı tipine alternatif isim verme
typedef ogrenci ogr;

int main(int argc, char** argv)
{
    // Yapının orijinal ismiyle değişken tanımlama
    ogrenci ogr1 = {101, 80};

    // typedef ile verilen isimle değişken tanımlama
    ogr ogr2 = {102, 90};

    cout << ogr1.numara << " - " << ogr1.notu << endl; // 101 - 80
    cout << ogr2.numara << " - " << ogr2.notu << endl; // 102 - 90

    return 0;
}
