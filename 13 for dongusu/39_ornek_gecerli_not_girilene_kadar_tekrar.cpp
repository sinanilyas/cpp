#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int girilenNot;

    for (;;)
    {
        cout << "Notu girin (0-100): ";
        cin >> girilenNot;

        // Girilen not geçerliyse döngüden çýk
        if (girilenNot >= 0 && girilenNot <= 100) break;

        cout << "HATA: 0-100 arasýnda bir deðer girmelisiniz." << endl;
    }

    cout << "Girilen not: " << girilenNot << endl;

    return 0;
}
