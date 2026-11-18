#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayi;

    cout << "Bir tamsayı giriniz: ";
    cin >> sayi;

    if (sayi == 3 || 4)
        cout << "Sayı 3 veya 4'tür." << endl;
    else
        cout << "Sayı 3 veya 4 değildir." << endl;

    /* MANTIK HATASI:
     * Bu koşul her zaman true olur
     * çünkü || operatörünün sağ tarafındaki
     * 4 değeri true kabul edilir ve
     * (sayi == 3 || true) yazılmış gibi çalıştırılır
     */

    return 0;
}
