#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* İki tamsayı arasında bölme işlemi yapıldığında sonuç da tamsayı olur.
     * Bölme sonucunun kesirli kısmı atılır. */
    cout << 5 / 2 << endl;     // 2

    /* Sayılardan en az biri double tipindeyse diğer sayı da double
     * tipine dönüştürülür ve sonuç double olur. */
    cout << 5.0 / 2 << endl;   // 2.5
    cout << 5 / 2.0 << endl;   // 2.5
    cout << 5.0 / 2.0 << endl; // 2.5

    return 0;
}
