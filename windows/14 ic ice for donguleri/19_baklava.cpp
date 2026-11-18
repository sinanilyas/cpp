#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýki ayrý dýþ döngü kullanýlarak baklava dilimi oluþturulabilir.
     * Ýlk döngü baklavanýn üst yarýsýný,
     * ikinci döngü ise alt yarýsýný oluþturur. */

    // Üst yarý
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    // Alt yarý
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
