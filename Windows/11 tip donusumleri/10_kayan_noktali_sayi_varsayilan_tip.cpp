#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Ondalıklı sabit sayılar herhangi bir son ek kullanılmazsa
     * double tipinde oluşturulur. */

    // Örtük double -> float dönüşümü yapılır
    float s1 = 5.2;
    float s2 = 6.; // 6.0
    float s3 = .7; // 0.7

    return 0;
}
