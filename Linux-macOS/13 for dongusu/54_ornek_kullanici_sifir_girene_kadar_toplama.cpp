#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Tekrar sayısı önceden bilinmiyorsa sonsuz döngü kullanılabilir.
     * Kullanıcı 0 girdiğinde break ile döngü sonlandırılır.
     * Girilen diğer sayıların toplamı hesaplanır. */

    int sayi, toplam = 0;

    for (;;)
    {
        cout << "Bir tamsayı giriniz (Çıkış: 0): ";
        cin >> sayi;

        if (sayi == 0) break;

        toplam += sayi;
    }

    cout << "Sayıların toplamı: " << toplam << endl;

    return 0;
}
