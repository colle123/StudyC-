#include <iostream>
#include <string.h>
#pragma warning(disable: 4996)

using namespace std;

char* MakeStrAdr(int len) {

	// char * str = (char*)malloc(sizeof(char) * len;
	char* str = new char[len];

	return str;
}

int main() {

	char* str = MakeStrAdr(20);
	strcpy(str, "I am so Happy~");
	cout << str << endl;
	// free(str);
	delete[]str;

	return 0;
}