#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç içe döngüler kullanýlarak satýr ve sütunlardan
     * oluþan þekiller oluþturulabilir.
     * Dýþ döngü satýrlarý, iç döngü sütunlarý oluþturur. */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "* ";
        }

        // Ýç döngü tamamlandýðýnda alt satýra geçilir.
        cout << endl;
    }

    return 0;
}
