#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* for döngüsünün artış bölümünde yalnızca ++ ve --
     * operatörleri değil, farklı ifadeler de kullanılabilir.
     * Bu bölümdeki ifade döngü gövdesinden sonra çalıştırılır. */

    for (int i = 1; i <= 10; cout << i++ << endl)
    {
        cout << "Döngü çalışıyor." << endl;
    }

    return 0;
}
