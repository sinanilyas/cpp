#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü kullanýlarak sayýlarýn toplamý hesaplanabilir.
     * Toplamý tutacak deðiþken baþlangýçta 0 yapýlýr.
     * Her tekrarda döngü deðiþkeninin deðeri
     * toplam deðiþkenine eklenir. */

    int toplam = 0;

    for (int i = 1; i <= 10; i++)
    {
        toplam += i;
    }

    cout << "Toplam: " << toplam << endl; // 55

    return 0;
}
