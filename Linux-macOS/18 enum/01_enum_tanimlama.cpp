#include <iostream>
using namespace std;

// Haftanın günlerini temsil eden enum tipi
enum gun {pts, sal, car, per, cum, cts, paz};

int main(int argc, char** argv)
{
    /* enum, isimlendirilmiş tamsayı sabitleri tanımlamak için kullanılır.
     * İlk elemana varsayılan olarak 0 değeri verilir.
     * Sonraki elemanların değerleri birer artar. */

    cout << pts << endl; // 0
    cout << sal << endl; // 1
    cout << car << endl; // 2
    cout << per << endl; // 3
    cout << cum << endl; // 4
    cout << cts << endl; // 5
    cout << paz << endl; // 6

    return 0;
}
