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

	One* pone = new One; // One형 객체 포인터 생성(부모)
	pone->one();
	One* ptwo = new Two; // One형 객체 포인터지만 가르켜지는 변수가 Two형이라 일치하지 않지만, 상속관계기 때문에 가능함.
	ptwo->one();
	One* pthree = new Three; // 부모 클래스는 자식 클래스의 객체 포인터 변수를 가질수가 있지만 자식은 부모를 못 가르킴.
	pthree->one();

	// Two* pptwo = new One; // 자식클래스 형 객체 포인터는 부모 클래스의 변수를 가르킬 수 없음.
	return 0;
}