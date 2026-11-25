#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* Aritmetik işlemler sırasında da örtük tür dönüşümü yapılabilir.
     * Farklı sayısal tipler arasında işlem yapıldığında, genellikle
     * daha küçük tipteki değer daha büyük tipe dönüştürülür.
     * Bu örnekte int tipindeki s1, double tipine dönüştürülür
     * ve toplama işlemi double tipinde gerçekleştirilir. */

    int s1 = 5;
    double s2 = 2.5;

    cout << s1 + s2 << endl; // 7.5

    return 0;
}
