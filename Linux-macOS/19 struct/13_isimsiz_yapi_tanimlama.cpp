#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Yapıya isim vermeden doğrudan değişken tanımlanabilir.
     * Bu durumda yapı türünün adı bulunmaz.
     * Yapı türünün adı olmadığı için daha sonra bu türün
     * adını kullanarak başka bir değişken tanımlanamaz. */
    struct
    {
        int kod;
        double fiyat;
    } buzdolabi;

    buzdolabi.kod = 101;
    buzdolabi.fiyat = 25000.0;

    cout << buzdolabi.kod << endl;   // 101
    cout << buzdolabi.fiyat << endl; // 25000

    return 0;
}
