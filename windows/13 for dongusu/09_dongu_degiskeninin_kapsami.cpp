#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for içinde tanýmlanan döngü deðiþkeni
     * yalnýzca döngü içerisinde kullanýlabilir.
     * Döngü sona erdiðinde bu deðiþkenin kapsamý biter. */

    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
    }

    // HATA: i deðiþkeni döngü dýþýnda kullanýlamaz.
    cout << i << endl;

    return 0;
}
