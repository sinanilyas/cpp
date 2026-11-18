#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün artış bölümü boş bırakılabilir.
     * Bu durumda döngü değişkeni gövde içinde değiştirilebilir.
     * Ancak döngünün sonsuza kadar sürmemesine dikkat edilmelidir. */

    for (int i = 1; i <= 5;)
    {
        cout << i << endl;
        i++;
    }

    // Ekrana sırasıyla 1, 2, 3, 4 ve 5 yazdırılır.

    return 0;
}
