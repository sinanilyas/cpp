#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int sayac = 1;

    // Koşul doğru olduğu sürece döngü tekrarlanır.
    while (sayac <= 10)
    {
        cout << sayac << endl;
        sayac++; // Sayaç artırılmazsa döngü sonsuza kadar devam eder.
    }

    return 0;
}
