#include <iostream>
using namespace std;

enum gun {pts = 1, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    gun bugun = car;

    /* sizeof operatörü, bir veri tipinin veya
     * deðiþkenin bellekte kapladýðý alaný
     * bayt cinsinden verir. */

    cout << sizeof(int) << endl;   // Genellikle 4
    cout << sizeof(gun) << endl;   // int ile ayný
    cout << sizeof(bugun) << endl; // int ile ayný
    cout << sizeof(pts) << endl;   // int ile ayný

    return 0;
}
