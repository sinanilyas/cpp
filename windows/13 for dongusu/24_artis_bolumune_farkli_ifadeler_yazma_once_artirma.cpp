#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    for (int i = 1; i <= 10; cout << ++i << endl)
    {
        cout << "Döngü çalýþýyor." << endl;
    }

    return 0;
}
