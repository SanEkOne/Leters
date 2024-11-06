#define _CRT_SECURE_NO_WARNINGS  

#include <iostream>  
#include <ctime>  
#include <string.h>  

using namespace std;

void main() {
	srand(time(NULL));

	int x = 20;

	char* s = new char[x];
	cin >> s;

	for (int i = 0; i < x; i++) {
		if ((i + 1) % 3 == 0) {
			cout << (char)toupper(s[i]);
		}
		else {
			cout << s[i];

		}
	}

}