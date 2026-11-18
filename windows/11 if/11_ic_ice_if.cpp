#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    // İçteki if yalnızca dıştaki koşul doğruysa değerlendirilir.
    if (sayi > 0)
    {
        cout << "Sayı pozitiftir." << endl;

        if (sayi % 2 == 0)
            cout << "Sayı aynı zamanda çifttir." << endl;
    }

    cout << "Program sona erdi." << endl;

    return 0;
}
