#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	
	int s1;
	int s2 = 5;
	int s3 = 2124154896;
	
	// Deðiþkenin boyutu deðerinden baðýmsýzdýr
	// Üç deðiþken de hafýzada ayný büyüklükte yer kaplar
	cout << sizeof(s1) << endl
	     << sizeof(s2) << endl
	     << sizeof(s3) << endl;
	
	return 0;
}

