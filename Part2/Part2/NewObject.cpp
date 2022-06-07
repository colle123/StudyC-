#include <iostream>
#include <stdlib.h>

using namespace std;

class Simple {

public:
	Simple() { // class이름과 똑같은 이름의 함수를 생성자라고 하고

		cout << "I'm Simple Constructor!" << endl;
	}
};

int main() {

	cout << "case1: ";
	Simple* sp1 = new Simple; // new는 동적할당되면서 이런 생성자를 호출함

	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); // 생성자를 호출하는 기능 외에는 큰 차이가 없어서 class를 동적할당 해주는 경우 아니면 malloc 함수를 써도 크게 문제 될 것은 없음.

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);

	return 0;
}