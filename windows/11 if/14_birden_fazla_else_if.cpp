#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int notu;

    cout << "Sınav notunuzu giriniz: ";
    cin >> notu;

    // Koşullar yukarıdan aşağıya doğru değerlendirilir.
    if (notu >= 90)
        cout << "Harf notu: AA" << endl;
    else if (notu >= 80)
        cout << "Harf notu: BA" << endl;
    else if (notu >= 70)
        cout << "Harf notu: BB" << endl;
    else if (notu >= 60)
        cout << "Harf notu: CB" << endl;
    else if (notu >= 50)
        cout << "Harf notu: CC" << endl;
    else
        cout << "Harf notu: FF" << endl;

    return 0;
}
