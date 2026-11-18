#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* continue komutundan önceki komutlar normal şekilde çalıştırılır.
     * continue komutuyla karşılaşıldığında ise döngü gövdesindeki
     * sonraki komutlar atlanır ve bir sonraki tekrara geçilir. */

    for (int i = 1; i <= 5; i++)
    {
        cout << "Başlangıç: " << i << endl;

        if (i == 3) continue;

        cout << "Bitiş: " << i << endl;
    }

    return 0;
}
