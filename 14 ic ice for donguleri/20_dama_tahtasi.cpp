#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Satýr ve sütun numaralarýnýn toplamýnýn tek veya çift
     * olmasýna göre farklý karakterler yazdýrýlabilir.
     * Böylece dama tahtasýna benzer bir desen oluþturulur. */

    for (int satir = 1; satir <= 8; satir++)
    {
        for (int sutun = 1; sutun <= 8; sutun++)
        {
            if ((satir + sutun) % 2 == 0)
                cout << "# ";
            else
                cout << ". ";
        }

        cout << endl;
    }

    return 0;
}
