#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    srand(time(0));

    /* rand() ile üretilen sayı RAND_MAX'a bölünürse
     * 0.0 ile 1.0 arasında ondalıklı bir sayı elde edilir. */

    // İki tamsayı bölündüğü için sonuç da tamsayı olur.
    cout << rand() / RAND_MAX << endl; // Neredeyse her zaman 0

    // Sayılardan biri double tipine dönüştürülürse sonuç double olur.
    double sayi = static_cast<double>(rand()) / RAND_MAX;
    cout << sayi << endl; // Örneğin 0.718162

    // 0.0-1.0 arasındaki sayı 10 ile çarpılırsa 0.0-10.0 arasında sayı elde edilir.
    cout << sayi * 10 << endl; // Örneğin 7.18162

    return 0;
}
