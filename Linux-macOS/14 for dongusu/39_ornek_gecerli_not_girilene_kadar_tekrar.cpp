#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int girilenNot;

    for (;;)
    {
        cout << "Notu girin (0-100): ";
        cin >> girilenNot;

        // Girilen not geçerliyse döngüden çık
        if (girilenNot >= 0 && girilenNot <= 100) break;

        cout << "HATA: 0-100 arasında bir değer girmelisiniz." << endl;
    }

    cout << "Girilen not: " << girilenNot << endl;

    return 0;
}
