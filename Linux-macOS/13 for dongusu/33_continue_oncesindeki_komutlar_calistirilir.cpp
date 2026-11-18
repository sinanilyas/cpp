#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
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
