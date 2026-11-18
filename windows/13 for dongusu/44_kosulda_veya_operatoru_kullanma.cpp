#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* || operatörü kullanýldýðýnda koþullardan en az
     * birinin doðru olmasý döngünün devam etmesi için yeterlidir.
     * Her iki koþul da yanlýþ olduðunda döngü sona erer. */

    for (int i = 1, j = 10; i <= 3 || j >= 7; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
