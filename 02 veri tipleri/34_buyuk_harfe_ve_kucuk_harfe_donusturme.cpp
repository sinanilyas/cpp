#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	/* A-Z arasýndaki harfler ASCII tablosunda alfabetik sýra ile saklanmaktadýr.
	 * Ayný þekilde a-z arasýndaki harfler de alfabetik sýralýdýr. */
	
	int fark = 'a' - 'A'; // 97-65 = 32
	
	// Herhangi bir büyük harfe 32 eklendiðinde o harfin küçük harfi elde edilir.
	char buyuk1 = 'E';
	char kucuk1 = buyuk1 + fark;
	cout << kucuk1 << endl;
	
	// Herhangi bir küçük harften 32 çýkarýldýðýnda o harfin büyük harfi elde edilir.
	char kucuk2 = 'n';
	char buyuk2 = kucuk2 - fark;
	cout << buyuk2 << endl;
	
	return 0;
}

