#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü deðiþkeninin baþlangýç deðeri deðiþtirilerek
     * farklý sayý dizileri oluþturulabilir.
     * 1'den baþlayýp ikiþer artýrýlýrsa tek sayýlar elde edilir. */

    for (int i = 1; i <= 10; i += 2)
    {
        cout << i << endl;
    }

    // Ekrana sýrasýyla 1, 3, 5, 7 ve 9 yazdýrýlýr.

    return 0;
}
