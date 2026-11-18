#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Bir yýlýn artýk yýl olmasý için aþaðýdaki koþullardan
     * birini saðlamasý gerekir:
     *     400'e tam bölünmesi.
     *     4'e tam bölünmesi ancak 100'e tam bölünmemesi.
     */

    int yil;

    cout << "Bir yýl giriniz: ";
    cin >> yil;

    // Yýl 400'e tam bölünüyorsa veya
    // 4'e tam bölünüp 100'e tam bölünmüyorsa artýk yýldýr.
    if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0))
        cout << "Artýk yýldýr." << endl;
    else
        cout << "Artýk yýl deðildir." << endl;

    return 0;
}
