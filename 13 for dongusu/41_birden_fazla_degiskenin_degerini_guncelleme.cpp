#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün artýþ bölümünde virgül kullanýlarak
     * birden fazla ifade yazýlabilir.
     * Bu ifadeler her tekrardan sonra soldan saða çalýþtýrýlýr. */

    for (int i = 1, j = 10; i <= 5; i++, j--)
    {
        cout << i << " + " << j << " = " << i + j << endl;
    }

    return 0;
}
