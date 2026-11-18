#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü koþulunda mantýksal operatörler kullanýlabilir.
     * && operatörü kullanýldýðýnda her iki koþulun da
     * doðru olmasý gerekir. Koþullardan biri yanlýþ
     * olduðunda döngü sona erer. */

    for (int i = 1, j = 10; i <= 5 && j >= 7; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
