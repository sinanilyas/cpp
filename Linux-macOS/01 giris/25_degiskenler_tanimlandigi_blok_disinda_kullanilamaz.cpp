#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	{
		int sayi = 5;
	}
	
	// HATA: sayi değişkeni tanımlandığı bloğun dışında kullanılamaz
	// çünkü blok sona erdiği an hafızadan silinir
	cout << "Sayı: " << sayi << endl;
	
	return 0;
}

