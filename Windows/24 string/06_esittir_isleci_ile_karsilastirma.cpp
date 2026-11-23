#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* string'ler == ve != işleçleriyle karşılaştırılabilir. Karakter
     * dizilerinde bu işleçler metinleri karşılaştırmaz; strcmp kullanılır. */
    string ad1 = "Ali";
    string ad2 = "Ali";
    string ad3 = "ali";

    cout << boolalpha;

    cout << (ad1 == ad2) << endl;   // true
    cout << (ad1 == ad3) << endl;   // false
    cout << (ad1 != ad3) << endl;   // true
    cout << (ad1 == "Ali") << endl; // true (sabit metinle de karşılaştırılabilir)

    // Büyük ve küçük harfler farklı karakterler olduğu için "Ali" ile "ali" aynı değildir.

    return 0;
}
