#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv)
{
    srand(time(0));

    /* Büyük harfler ASCII tablosunda 'A' (65) ile 'Z' (90) arasında
     * art arda sıralanmıştır ve toplam 26 tanedir.
     * 'A' karakterine 0-25 arasında rastgele bir sayı eklenirse
     * rastgele bir büyük harf elde edilir.
     * Türkçe harfler (Ç, Ğ, İ, Ö, Ş, Ü) bu aralıkta yer almaz. */

    // 8 harfli rastgele bir şifre üretilir
    for (int i = 1; i <= 8; i++)
    {
        char harf = 'A' + rand() % 26;
        cout << harf;
    }
    cout << endl; // Örneğin KXQBTMZA

    /* cout << 'A' + rand() % 26 yazılsaydı işlemin sonucu int olacağı için
     * harf yerine harfin ASCII kodu yazdırılırdı. */

    return 0;
}
