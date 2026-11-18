#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Aritmetik iþlemler sýrasýnda da örtük tür dönüþümü yapýlabilir.
     * Farklý sayýsal tipler arasýnda iþlem yapýldýðýnda, genellikle
     * daha küçük tipteki deðer daha büyük tipe dönüþtürülür.
     * Bu örnekte int tipindeki s1, double tipine dönüþtürülür
     * ve toplama iþlemi double tipinde gerçekleþtirilir. */

    int s1 = 5;
    double s2 = 2.5;

    cout << s1 + s2 << endl; // 7.5

    return 0;
}
