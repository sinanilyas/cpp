#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

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
