#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayilar[5];

    // HATA: Diziye baþlangýç deðerleri sonradan verilemez,
    // yalnýzca en baþta tanýmlanýrken verilebilir.
    sayilar = {10, 20, 30, 40, 50};

    return 0;
}
