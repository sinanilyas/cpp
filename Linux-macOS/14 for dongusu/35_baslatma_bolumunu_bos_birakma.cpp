#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün başlatma bölümü boş bırakılabilir.
     * Bu durumda değişken döngüden önce tanımlanabilir.
     * Başlatma bölümü boş olsa bile ; işareti kullanılmalıdır. */

    int i = 1;

    for (; i <= 5; i++)
    {
        cout << i << endl;
    }

    // Ekrana sırasıyla 1, 2, 3, 4 ve 5 yazdırılır.

    return 0;
}
