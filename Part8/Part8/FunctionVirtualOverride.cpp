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
	Second* sptr = tptr; // 부모는 자식 포인터를 가리킬 수 있음 반대는 X, 전부 Third에 있는 가상 함수를 가리키고 있음
	First *fptr = sptr; // 부모는 자식 포인터를 가리킬 수 있음, 전부 Third에 있는 가상 함수를 가리키고 있음.

	fptr->MyFunc();
	sptr->MyFunc();
	tptr->MyFunc();
}