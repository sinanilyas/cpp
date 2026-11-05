#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* break komutu, döngü koþulu hâlâ doðru olsa bile
     * döngüyü hemen sonlandýrmak için kullanýlýr.
     * Program döngüden sonraki komuttan devam eder. */

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6) break;

        cout << i << endl;
    }

    // Ekrana 1, 2, 3, 4 ve 5 yazdýrýlýr.

    cout << "Döngü sona erdi." << endl;

    return 0;
}
