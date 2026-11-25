#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* for döngüsünün artış bölümünde yalnızca ++ ve --
     * operatörleri değil, farklı ifadeler de kullanılabilir.
     * Bu bölümdeki ifade döngü gövdesinden sonra çalıştırılır. */

    for (int i = 1; i <= 10; cout << i++ << endl)
    {
        cout << "Döngü çalışıyor." << endl;
    }

    return 0;
}
