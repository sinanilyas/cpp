#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    srand(time(0));

    /* Büyük harfler ASCII tablosunda 'A' (65) ile 'Z' (90) arasýnda
     * art arda sýralanmýþtýr ve toplam 26 tanedir.
     * 'A' karakterine 0-25 arasýnda rastgele bir sayý eklenirse
     * rastgele bir büyük harf elde edilir.
     * Türkçe harfler (Ç, Ð, Ý, Ö, Þ, Ü) bu aralýkta yer almaz. */

    // 8 harfli rastgele bir þifre üretilir
    for (int i = 1; i <= 8; i++)
    {
        char harf = 'A' + rand() % 26;
        cout << harf;
    }
    cout << endl; // Örneðin KXQBTMZA

    /* cout << 'A' + rand() % 26 yazýlsaydý iþlemin sonucu int olacaðý için
     * harf yerine harfin ASCII kodu yazdýrýlýrdý. */

    return 0;
}
