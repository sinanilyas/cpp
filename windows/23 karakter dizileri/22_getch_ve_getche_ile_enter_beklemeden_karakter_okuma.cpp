#include <iostream>
#include <conio.h> // _getch ve _getche için
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* cin ile okumada program, kullanıcı Enter tuşuna basana kadar bekler.
     * conio.h içindeki _getch ve _getche fonksiyonları ise klavyeden tek
     * bir karakter okur ve Enter tuşunu beklemez.
     *
     * _getch : Basılan tuşu ekranda göstermez.
     * _getche: Basılan tuşu ekranda gösterir (sondaki e harfi: echo).
     *
     * Bazı derleyicilerde getch ve getche adları da kullanılabilir.
     * Bu adlar eskimiş kabul edildiği için bazı derleyiciler uyarı ya da
     * hata verir; bu durumda _getch ve _getche kullanılır.
     *
     * conio.h standart C++ kütüphanesinin bir parçası değildir. Her
     * derleyicide ve işletim sisteminde bulunmaz. */

    cout << "Bir tuşa basınız (ekranda görünmeyecek): ";
    char tus1 = _getch();
    cout << endl << "Basılan tuş: " << tus1 << endl;

    cout << "Bir tuşa daha basınız (ekranda görünecek): ";
    char tus2 = _getche();
    cout << endl << "Basılan tuş: " << tus2 << endl;

    /* Dönen değer kullanılmadan yalnızca bir tuşa basılması da beklenebilir.
     * Şifre girişi gibi karakterlerin ekranda görünmemesi gereken yerlerde
     * de _getch kullanılır. */
    cout << "Çıkmak için bir tuşa basınız...";
    _getch();

    return 0;
}
