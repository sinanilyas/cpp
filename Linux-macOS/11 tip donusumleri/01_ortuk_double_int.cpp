#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* 5.6 sabit sayısı double tipindedir.
     * sayi değişkenine atanırken otomatik olarak int tipine dönüştürülür.
     * Dönüşüm sırasında kesirli kısmı atılır.
     * Bu dönüşüme kapalı ya da örtük (implicit) tür dönüşümü denir. */
    int sayi = 5.6;

    cout << sayi << endl; // 5

    return 0;
}
