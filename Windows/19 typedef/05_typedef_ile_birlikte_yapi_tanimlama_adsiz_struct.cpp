#include <iostream>
#include <windows.h>
using namespace std;

/* typedef kullanılarak yapı tanımlanırken
 * yapıya ayrıca bir isim verilmesi zorunlu değildir.
 * ogr ismi, tanımlanan yapı tipini ifade eder. */
typedef struct
{
    int numara;
    int notu;
} ogr;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    ogr ogr1 = {101, 80};
    ogr ogr2 = {102, 90};

    cout << ogr1.numara << " - " << ogr1.notu << endl; // 101 - 80
    cout << ogr2.numara << " - " << ogr2.notu << endl; // 102 - 90

    return 0;
}
