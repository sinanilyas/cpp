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

    // Koşul doğruysa if, yanlışsa else komutu çalıştırılır.
    if (sayi % 2 == 0)
        cout << "Sayı çifttir." << endl;
    else
        cout << "Sayı tektir." << endl;

    cout << "Program sona erdi." << endl;

    return 0;
}
