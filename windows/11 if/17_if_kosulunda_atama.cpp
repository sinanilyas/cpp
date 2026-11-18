#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 0;

    /* HATALI KULLANIM:
     * Önce atama yapýlýr, sonra sayi deðiþkenin deðerinin
     * true olup olmadýðý kontrol edilir. */

    if (sayi = 0)
        cout << "Koþul doðrudur." << endl;
    else
        cout << "Koþul yanlýþtýr." << endl;

    cout << "Sayý: " << sayi << endl; // 0

    return 0;
}
