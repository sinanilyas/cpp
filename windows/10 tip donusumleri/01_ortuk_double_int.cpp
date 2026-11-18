#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* 5.6 sabit sayýsý double tipindedir.
     * sayi deðiþkenine atanýrken otomatik olarak int tipine dönüþtürülür.
     * Dönüþüm sýrasýnda kesirli kýsmý atýlýr.
     * Bu dönüþüme kapalý ya da örtük (implicit) tür dönüþümü denir. */
    int sayi = 5.6;

    cout << sayi << endl; // 5

    return 0;
}
