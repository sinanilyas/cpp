#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 0;

    /* HATALI KULLANIM:
     * Önce atama yapılır, sonra sayi değişkenin değerinin
     * true olup olmadığı kontrol edilir. */

    if (sayi = 0)
        cout << "Koşul doğrudur." << endl;
    else
        cout << "Koşul yanlıştır." << endl;

    cout << "Sayı: " << sayi << endl; // 0

    return 0;
}
