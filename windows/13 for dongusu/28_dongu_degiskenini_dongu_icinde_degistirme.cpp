#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeninin deðeri döngü gövdesinde de deðiþtirilebilir.
     * Ancak bu durum döngünün çalýþma mantýðýný
     * takip etmeyi zorlaþtýrdýðý için tavsiye edilmez. */

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        i++;
    }

    /* i deðiþkeni hem döngü gövdesinde hem de artýþ bölümünde
     * artýrýldýðý için ekrana 0, 2, 4, 6 ve 8 yazdýrýlýr. */

    return 0;
}
