#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Turkish");

    /* Dizinin eleman sayýsý metnin uzunluðundan 1 fazla yazýlýrsa
     * null karakterini yazmak gerekmez. Eksik baþlangýç deðerleri 0 olduðu
     * için son elemana 0, yani null karakteri verilir. */
    char ad[4] = {'A', 'l', 'i'};

    cout << ad << endl; // Ali

    cout << static_cast<int>(ad[3]) << endl; // 0

    return 0;
}
