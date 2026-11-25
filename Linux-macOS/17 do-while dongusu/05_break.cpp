#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi = 1;

    /* break komutu çalıştırıldığında döngü,
     * koşul kontrol edilmeden sonlandırılır. */

    do
    {
        if (sayi == 5) break;

        cout << sayi << endl;
        sayi++;

    } while (sayi <= 10);

    cout << "Döngü sona erdi." << endl;

    return 0;
}
