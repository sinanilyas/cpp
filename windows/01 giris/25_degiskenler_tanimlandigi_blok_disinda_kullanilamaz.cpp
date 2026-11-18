#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");

	{
		int sayi = 5;
	}
	
	// HATA: sayi deðiþkeni tanýmlandýðý bloðun dýþýnda kullanýlamaz
	// çünkü blok sona erdiði an hafýzadan silinir
	cout << "Sayý: " << sayi << endl;
	
	return 0;
}

