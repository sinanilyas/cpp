#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi = 0;

    // Pozitif bir sayý girilene kadar giriþ istenir.
    while (sayi <= 0)
    {
        cout << "Pozitif bir sayý giriniz: ";
        cin >> sayi;
    }

    cout << "Girdiðiniz sayý: " << sayi << endl;

    return 0;
}
