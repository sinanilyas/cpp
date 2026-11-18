#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* for döngüsünün başlatma bölümünde yalnızca
     * değişken tanımlama veya değer atama değil,
     * farklı ifadeler de kullanılabilir.
     * Bu bölümdeki ifade yalnızca bir kez çalıştırılır. */

    int i = 1;

    for (cout << "Döngü başlıyor." << endl; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
