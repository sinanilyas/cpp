#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    /* HATALI KULLANIM: Noktalı virgül if komutunu sonlandırır.
     * Bu kullanım sözdizimi hatası değil, mantık hatasıdır.
     * Yani program derlenir ve çalışır fakat beklenen sonucu üretmez. */
    if (sayi > 0);
        cout << "Sayı pozitiftir." << endl;

    /* Yukarıdaki cout komutu koşuldan bağımsız olarak çalıştırılır. */

    cout << "Program sona erdi." << endl;

    return 0;
}
