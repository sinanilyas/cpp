#include <iostream>
// #include <windows.h>

int main(int argc, char** argv) {
	/* Windows'ta Türkçe karakterlerin düzgün okunup
	 * yazdırılabilmesi için aşağıdaki iki komut yazılmalıdır. */
	// SetConsoleCP(CP_UTF8);
	// SetConsoleOutputCP(CP_UTF8);

	/* Linux ve macOS'ta bu iki komut gerekmez. */
	
	std::cout << "Yazdığım ilk C++ programı.";
	
	return 0;
}

