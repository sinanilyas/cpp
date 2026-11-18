#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayilar[5];

    // HATA: Diziye başlangıç değerleri sonradan verilemez,
    // yalnızca en başta tanımlanırken verilebilir.
    sayilar = {10, 20, 30, 40, 50};

    return 0;
}
