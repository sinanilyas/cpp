#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char** argv)
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char ad[] = "Şule";

	/* Türkçe karakteri saklayan iki elemandan sadece biri yazdırılırsa
	 * ekranda anlamsız bir karakter görünür */
	
    cout << ad[0]; // Ş harfini saklayan ilk eleman
    cout << ad[1]; // Ş harfini saklayan ikinci eleman
	
	// Ş harfi saklayan her iki eleman peş peşe yazdırılırsa ekranda gerçekten Ş görünür
    cout << ad[0] << ad[1];

    return 0;
}
