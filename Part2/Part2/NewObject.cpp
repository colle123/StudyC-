#include <iostream>
#include <stdlib.h>

using namespace std;

class Simple {

public:
	Simple() { // class�̸��� �Ȱ��� �̸��� �Լ��� �����ڶ�� �ϰ�

		cout << "I'm Simple Constructor!" << endl;
	}
};

int main() {

	cout << "case1: ";
	Simple* sp1 = new Simple; // new�� �����Ҵ�Ǹ鼭 �̷� �����ڸ� ȣ����

	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1); // �����ڸ� ȣ���ϴ� ��� �ܿ��� ū ���̰� ��� class�� �����Ҵ� ���ִ� ��� �ƴϸ� malloc �Լ��� �ᵵ ũ�� ���� �� ���� ����.

	cout << endl << "end of main" << endl;
	delete sp1;
	free(sp2);

	return 0;
}