#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýki tamsayý arasýnda bölme iþlemi yapýldýðýnda sonuç da tamsayý olur.
     * Bölme sonucunun kesirli kýsmý atýlýr. */
    cout << 5 / 2 << endl;     // 2

    /* Sayýlardan en az biri double tipindeyse diðer sayý da double
     * tipine dönüþtürülür ve sonuç double olur. */
    cout << 5.0 / 2 << endl;   // 2.5
    cout << 5 / 2.0 << endl;   // 2.5
    cout << 5.0 / 2.0 << endl; // 2.5

    return 0;
}
