#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // cin girilen değeri değişkenin veri tipine göre yorumlar.

    int yas;
    double boy;
    char cinsiyet;

    cout << "Yaş: ";
    cin >> yas;

    cout << "Boy: ";
    cin >> boy;

    cout << "Cinsiyet: ";
    cin >> cinsiyet;

    cout << "Yaş: " << yas << endl;
    cout << "Boy: " << boy << endl;
    cout << "Cinsiyet: " << cinsiyet << endl;

    return 0;
}
