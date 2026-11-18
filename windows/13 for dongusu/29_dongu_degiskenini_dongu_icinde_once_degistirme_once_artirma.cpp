#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    for (int i = 0; i < 10; i++)
    {
        cout << ++i << endl;
    }

    /* i deðiþkeni döngü gövdesinde ekrana yazdýrýlmadan önce
     * artýrýldýðý için ekrana 1, 3, 5, 7 ve 9 yazdýrýlýr. */

    return 0;
}
