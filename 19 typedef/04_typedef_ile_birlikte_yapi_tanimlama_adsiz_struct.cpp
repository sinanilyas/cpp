#include <iostream>
using namespace std;

/* typedef kullanýlarak yapý tanýmlanýrken
 * yapýya ayrýca bir isim verilmesi zorunlu deðildir.
 * ogr ismi, tanýmlanan yapý tipini ifade eder. */
typedef struct
{
    int numara;
    int notu;
} ogr;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    ogr ogr1 = {101, 80};
    ogr ogr2 = {102, 90};

    cout << ogr1.numara << " - " << ogr1.notu << endl; // 101 - 80
    cout << ogr2.numara << " - " << ogr2.notu << endl; // 102 - 90

    return 0;
}
