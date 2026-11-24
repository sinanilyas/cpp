#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int yas = 20;
    double boy = 1.75;

    /* to_string fonksiyonu bir sayıyı metne dönüştürür. Sayılar + işleciyle
     * bir string'e doğrudan eklenemez; önce metne dönüştürülür. */
    string bilgi = "Yaş: " + to_string(yas);

    cout << bilgi << endl; // Yaş: 20

    // Ondalıklı sayılar, ondalık ayırıcıdan sonra 6 basamakla metne dönüştürülür.
    cout << to_string(boy) << endl; // 1.750000

    return 0;
}
