#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Döngü değişkeninin değeri döngü gövdesinde de değiştirilebilir.
     * Ancak bu durum döngünün çalışma mantığını
     * takip etmeyi zorlaştırdığı için tavsiye edilmez. */

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        i++;
    }

    /* i değişkeni hem döngü gövdesinde hem de artış bölümünde
     * artırıldığı için ekrana 0, 2, 4, 6 ve 8 yazdırılır. */

    return 0;
}
