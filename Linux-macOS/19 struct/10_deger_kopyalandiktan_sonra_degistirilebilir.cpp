#include <iostream>
using namespace std;

struct urun
{
    int kod;
    double fiyat;
};

int main(int argc, char** argv)
{
    urun urun1 = {101, 25000.0};

    /* Değerler anlık olarak kopyalanır ancak
     * urun1 ile urun2 arasında kalıcı bir bağ oluşmaz. */
    urun urun2 = urun1;

    // Bu atama urun1'in bilgilerini etkilemez
    urun2.kod = 500;

    cout << urun1.kod << endl;   // 101
    cout << urun2.kod << endl;   // 500

    return 0;
}
