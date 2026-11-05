#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    int sayi;

    cout << "Bir tamsayý giriniz: ";
    cin >> sayi;

    // Ýçteki if yalnýzca dýþtaki koþul doðruysa deðerlendirilir.
    if (sayi > 0)
    {
        cout << "Sayý pozitiftir." << endl;

        if (sayi % 2 == 0)
            cout << "Sayý ayný zamanda çifttir." << endl;
    }

    cout << "Program sona erdi." << endl;

    return 0;
}
