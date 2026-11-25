#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Dizinin elemanlarına tanımlama sırasında başlangıç değeri
     * verilebilir. Değerler küme parantezi içinde virgülle ayrılarak
     * yazılır ve sırasıyla 0, 1, 2, ... indisli elemanlara verilir.
     * Yazım, yapı değişkenlerine başlangıç değeri vermeye benzer. */
    int sayilar[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        cout << sayilar[i] << " ";
    }
    cout << endl;

    // Ekrana 10 20 30 40 50 yazdırılır.

    return 0;
}
