#include <iostream>
using namespace std;

class First {

public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }

};

class Second : public First {

public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second {

public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};

int main() {

	Third* tptr = new Third();
	Second* sptr = tptr; // �θ�� �ڽ� �����͸� ����ų �� ���� �ݴ�� X, ���� Third�� �ִ� ���� �Լ��� ����Ű�� ����
	First *fptr = sptr; // �θ�� �ڽ� �����͸� ����ų �� ����, ���� Third�� �ִ� ���� �Լ��� ����Ű�� ����.

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
}