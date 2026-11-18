#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü değişkeninin başlangıç değeri değiştirilerek
     * farklı sayı dizileri oluşturulabilir.
     * 1'den başlayıp ikişer artırılırsa tek sayılar elde edilir. */

    for (int i = 1; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // Ekrana sırasıyla 1, 3, 5, 7 ve 9 yazdırılır.

    return 0;
}
