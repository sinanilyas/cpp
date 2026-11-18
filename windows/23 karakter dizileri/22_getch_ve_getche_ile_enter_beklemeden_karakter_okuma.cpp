#include <iostream>
#include <conio.h> // _getch ve _getche için
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* cin ile okumada program, kullanýcý Enter tuþuna basana kadar bekler.
     * conio.h içindeki _getch ve _getche fonksiyonlarý ise klavyeden tek
     * bir karakter okur ve Enter tuþunu beklemez.
     *
     * _getch : Basýlan tuþu ekranda göstermez.
     * _getche: Basýlan tuþu ekranda gösterir (sondaki e harfi: echo).
     *
     * Bazý derleyicilerde getch ve getche adlarý da kullanýlabilir.
     * Bu adlar eskimiþ kabul edildiði için bazý derleyiciler uyarý ya da
     * hata verir; bu durumda _getch ve _getche kullanýlýr.
     *
     * conio.h standart C++ kütüphanesinin bir parçasý deðildir. Her
     * derleyicide ve iþletim sisteminde bulunmaz. */

    cout << "Bir tuþa basýnýz (ekranda görünmeyecek): ";
    char tus1 = _getch();
    cout << endl << "Basýlan tuþ: " << tus1 << endl;

    cout << "Bir tuþa daha basýnýz (ekranda görünecek): ";
    char tus2 = _getche();
    cout << endl << "Basýlan tuþ: " << tus2 << endl;

    /* Dönen deðer kullanýlmadan yalnýzca bir tuþa basýlmasý da beklenebilir.
     * Þifre giriþi gibi karakterlerin ekranda görünmemesi gereken yerlerde
     * de _getch kullanýlýr. */
    cout << "Çýkmak için bir tuþa basýnýz...";
    _getch();

    return 0;
}
