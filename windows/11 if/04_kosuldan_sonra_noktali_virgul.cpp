#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    /* HATALI KULLANIM: Noktalý virgül if komutunu sonlandýrýr.
     * Bu kullaným sözdizimi hatasý deðil, mantýk hatasýdýr.
     * Yani program derlenir ve çalýþýr fakat beklenen sonucu üretmez. */
    if (sayi > 0);
        cout << "Sayý pozitiftir." << endl;

    /* Yukarýdaki cout komutu koþuldan baðýmsýz olarak çalýþtýrýlýr. */

    cout << "Program sona erdi." << endl;

    return 0;
}
