#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngünün deðiþkeni ekrana yazdýrýlarak
     * her satýrda artan sayý dizileri oluþturulabilir. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
