#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    /* Dizinin eleman sayısı metnin uzunluğundan 1 fazla yazılırsa
     * null karakterini yazmak gerekmez. Eksik başlangıç değerleri 0 olduğu
     * için son elemana 0, yani null karakteri verilir. */
    char ad[4] = {'A', 'l', 'i'};

    cout << ad << endl; // Ali

    cout << static_cast<int>(ad[3]) << endl; // 0

    return 0;
}
