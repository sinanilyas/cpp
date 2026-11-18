#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    char harfNotu;

    cout << "Harf notunuzu giriniz (A-F): ";
    cin >> harfNotu;

    /* Büyük ve küçük harflerin aynı işlemi yapması için
     * iki ayrı case aynı komutlara yönlendirilebilir.
     * Örneğin kullanıcı A veya a girerse "Pekiyi" yazdırılır. */

    switch (harfNotu)
    {
        case 'A':
        case 'a':
            cout << "Pekiyi" << endl;
            break;
        case 'B':
        case 'b':
            cout << "İyi" << endl;
            break;
        case 'C':
        case 'c':
            cout << "Orta" << endl;
            break;
        case 'D':
        case 'd':
            cout << "Geçer" << endl;
            break;
        case 'F':
        case 'f':
            cout << "Başarısız" << endl;
            break;
        default:
            cout << "Geçersiz harf notu!" << endl;
            break;
    }

    return 0;
}
