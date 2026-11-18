#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    /* break komutundan önceki komutlar normal şekilde çalıştırılır.
     * break komutuyla karşılaşıldığında ise döngü sonlandırılır. */
    for (int i = 1; i <= 5; i++)
    {
        cout << "Başlangıç: " << i << endl;

        if (i == 3) break;

        cout << "Bitiş: " << i << endl;
    }

    return 0;
}
