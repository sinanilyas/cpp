#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    string cumle = "Ali okula gitti";

    /* find fonksiyonu aranan metnin ilk bulunduğu konumu, yani ilk
     * karakterinin indisini döndürür. Konum, işaretsiz bir tamsayı tipi
     * olan size_t tipinde saklanır. */
    size_t konum = cumle.find("okul");

    cout << konum << endl; // 4

    /* Aranan metin bulunamazsa find, string::npos adlı özel bir değer
     * döndürür. Sonuç bu değerle karşılaştırılarak metnin bulunup
     * bulunmadığı anlaşılır. */
    konum = cumle.find("ev");

    if (konum == string::npos)
    {
        cout << "Bulunamadı." << endl;
    }
    else
    {
        cout << "Bulundu. Konum: " << konum << endl;
    }

    // Ekrana Bulunamadı. yazdırılır.

    return 0;
}
