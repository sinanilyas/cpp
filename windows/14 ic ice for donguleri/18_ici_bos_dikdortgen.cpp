#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Ýç döngüde if kullanýlarak yalnýzca belirli
     * konumlara karakter yazdýrýlabilir.
     * Ýlk ve son satýrlarla ilk ve son sütunlara yýldýz,
     * diðer konumlara ise boþluk yazdýrýlýr. */

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            bool ilkSatir = i == 1;
            bool sonSatir = i == 5;
            bool ilkSutun = j == 1;
            bool sonSutun = j == 8;

            if (ilkSatir || sonSatir || ilkSutun || sonSutun)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
