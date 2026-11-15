#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Eleman sayýsýndan fazla baþlangýç deðeri verilirse
     * program derlenmez. */

    // HATA: Dizinin eleman sayýsýndan fazla baþlangýç deðeri verilmiþ
    int sayilar[3] = {10, 20, 30, 40};

    cout << sayilar[0] << endl;

    return 0;
}
