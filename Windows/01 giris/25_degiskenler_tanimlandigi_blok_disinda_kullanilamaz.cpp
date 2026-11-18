#include <iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	{
		int sayi = 5;
	}
	
	// HATA: sayi değişkeni tanımlandığı bloğun dışında kullanılamaz
	// çünkü blok sona erdiği an hafızadan silinir
	cout << "Sayı: " << sayi << endl;
	
	return 0;
}

