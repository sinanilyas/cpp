#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Döngü koþulunda birden fazla deðiþken kullanýlabilir.
     * Bu örnekte i artýrýlýrken j azaltýlýr.
     * i deðeri j deðerinden küçük olduðu sürece döngü çalýþýr. */

    for (int i = 1, j = 9; i < j; i++, j--)
    {
        cout << "i = " << i << ", j = " << j << endl;
    }

    return 0;
}
