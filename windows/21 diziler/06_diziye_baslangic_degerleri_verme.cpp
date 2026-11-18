#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dizinin elemanlarýna tanýmlama sýrasýnda baþlangýç deðeri
     * verilebilir. Deðerler küme parantezi içinde virgülle ayrýlarak
     * yazýlýr ve sýrasýyla 0, 1, 2, ... indisli elemanlara verilir.
     * Yazým, yapý deðiþkenlerine baþlangýç deðeri vermeye benzer. */
    int sayilar[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 yazdýrýlýr.

    return 0;
}
