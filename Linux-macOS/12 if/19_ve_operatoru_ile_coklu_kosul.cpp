#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz (10-20): ";
    cin >> sayi;

    // Her iki koşul da doğruysa if bloğu çalıştırılır.
    if (sayi >= 10 && sayi <= 20)
        cout << "Sayı 10 ile 20 arasındadır." << endl;
    else
        cout << "Sayı belirtilen aralıkta değildir." << endl;

    return 0;
}
