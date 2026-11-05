#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	int sayi = 7;
	
	// int tipli sayi deðiþkeninin boyutu (hafýzada kaç byte yer kapladýðý) yazdýrýlýr
	cout << sizeof(sayi) << endl;
	
	return 0;
}

