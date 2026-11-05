#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* for döngüsünün artýþ bölümü boþ býrakýlabilir.
     * Bu durumda döngü deðiþkeni gövde içinde deðiþtirilebilir.
     * Ancak döngünün sonsuza kadar sürmemesine dikkat edilmelidir. */

    for (int i = 1; i <= 5;)
    {
        cout << i << endl;
        i++;
    }

    // Ekrana sýrasýyla 1, 2, 3, 4 ve 5 yazdýrýlýr.

    return 0;
}
