#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* compare fonksiyonu iki metni karakter dizilerindeki strcmp gibi
     * karşılaştırır ve
     *   metinler aynıysa 0,
     *   metin sıralamada önce geliyorsa negatif bir sayı,
     *   metin sıralamada sonra geliyorsa pozitif bir sayı döndürür.
     *
     * Döndürülen sayının kendisi derleyiciye göre değişebilir.
     * Yalnızca 0 olup olmadığına ve işaretine bakılmalıdır. */
    string sehir1 = "sakarya";
    string sehir2 = "Sakarya";

    cout << sehir1.compare(sehir2) << endl;    // Pozitif bir sayı: 's' (115) > 'S' (83)
    cout << sehir2.compare(sehir1) << endl;    // Negatif bir sayı: 'S' (83) < 's' (115)
    cout << sehir2.compare("Sakarya") << endl; // 0

    /* Yalnızca iki metnin aynı olup olmadığına ya da hangisinin önce
     * geldiğine bakılacaksa ==, < ve > işleçleri daha kolaydır. */

    return 0;
}
