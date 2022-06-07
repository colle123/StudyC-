#include <iostream>
using namespace std;

class One {

public:

	void one() {

		cout << "One::one" << endl;
	}
};

class Two : public One {

public:

	void two() {

		cout << "Two::two()" << endl;

	}
};

class Three : public Two {

public:
	void three() {

		cout << "Three::three()" << endl;
	}
};

int main() {

	One* pone = new One; // One�� ��ü ������ ����(�θ�)
	pone->one();
	One* ptwo = new Two; // One�� ��ü ���������� ���������� ������ Two���̶� ��ġ���� ������, ��Ӱ���� ������ ������.
	ptwo->one();
	One* pthree = new Three; // �θ� Ŭ������ �ڽ� Ŭ������ ��ü ������ ������ �������� ������ �ڽ��� �θ� �� ����Ŵ.
	pthree->one();

	// Two* pptwo = new One; // �ڽ�Ŭ���� �� ��ü �����ʹ� �θ� Ŭ������ ������ ����ų �� ����.
	return 0;
}