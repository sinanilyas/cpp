#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Windows platformlarýnda 5000000000 sabit sayýsý long long int tipindedir.
     * Hiçbir tip dönüþümü yapýlmadan sayi deðiþkenine atanýr. */
    long long sayi = 5000000000;

    cout << sayi << endl; // 5000000000

    return 0;
}
