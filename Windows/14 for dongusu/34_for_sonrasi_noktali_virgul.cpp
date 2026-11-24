#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* for döngüsünün sonuna yanlışlıkla ; konulursa
     * döngünün gövdesi boş olur.
     * Bu nedenle cout komutu döngüye dâhil edilmez
     * ve döngü tamamlandıktan sonra yalnızca bir kez çalıştırılır.
     */

    for (int i = 1; i <= 5; i++);
        cout << "Merhaba" << endl;

    /* Yalnızca bir kez Merhaba yazılır. */

    return 0;
}
