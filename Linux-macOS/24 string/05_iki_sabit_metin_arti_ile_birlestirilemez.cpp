#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    /* Çift tırnak içine yazılan sabit metinler string değil, karakter
     * dizisidir. + işleciyle birleştirme yapılabilmesi için iki taraftan
     * en az birinin string olması gerekir. */
    string ad = "Ali";

    string selam1 = "Merhaba " + ad; // Sağ taraf string olduğu için doğru

    // HATA: İki sabit metin + işleciyle birleştirilemez.
    string selam2 = "Merhaba " + "Ali";

    cout << selam1 << endl;
    cout << selam2 << endl;

    /* İşlemler soldan sağa yapılır. "Merhaba " + ad + "!" doğrudur,
     * çünkü önce "Merhaba " + ad hesaplanır ve sonuç bir string olur.
     * "Merhaba " + "Ali" + ad ise hatalıdır. */

    return 0;
}
