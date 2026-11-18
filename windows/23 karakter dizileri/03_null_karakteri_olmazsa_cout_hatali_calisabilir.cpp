#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Süslü parantezle başlangıç değeri verilirken null karakteri
     * unutulursa metnin nerede bittiği belli olmaz. cout, null karakterini
     * bulana kadar dizinin arkasındaki bellek alanını da okumaya devam eder. */
    char ad[] = {'A', 'l', 'i'}; // MANTIK HATASI: Son karakter null karakteri olmalıdır
    char soyad[] = {'K', 'a', 'y', 'a', '\0'};

    cout << ad << endl;    // Ali ile birlikte anlamsız karakterler yazdırılabilir.
    cout << soyad << endl; // Kaya

    /* Dizinin arkasındaki bellek alanında tesadüfen 0 değeri varsa
     * Ali doğru yazdırılabilir. Bu, programın doğru olduğunu göstermez. */

    return 0;
}
