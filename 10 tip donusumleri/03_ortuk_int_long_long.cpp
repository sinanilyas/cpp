#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* 5 sabit sayýsý int tipindedir.
     * Örtük olarak long long tipine dönüþtürülür ve sayi deðiþkenine atanýr. */
    long long sayi = 5;

    cout << sayi << endl; // 5

    return 0;
}
