#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Satır ve sütun numaralarının toplamının tek veya çift
     * olmasına göre farklı karakterler yazdırılabilir.
     * Böylece dama tahtasına benzer bir desen oluşturulur. */

    for (int satir = 1; satir <= 8; satir++)
    {
        for (int sutun = 1; sutun <= 8; sutun++)
        {
            if ((satir + sutun) % 2 == 0)
                cout << "# ";
            else
                cout << ". ";
        }

        cout << endl;
    }

    return 0;
}
