#include <iostream>
using namespace std;

/* typedef direkt yapı tanımlaması ile
 * birlikte kullanılabilir */
typedef struct ogrenci
{
    int numara;
    int notu;
} ogr;

int main(int argc, char** argv)
{
    // Değişken tanımlarken ogrenci veya ogr tipi kullanılabilir
    ogrenci ogr1 = {101, 80};
    ogr ogr2 = {102, 90};

    cout << ogr1.numara << " - " << ogr1.notu << endl; // 101 - 80
    cout << ogr2.numara << " - " << ogr2.notu << endl; // 102 - 90

    return 0;
}
