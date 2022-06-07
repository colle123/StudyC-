#include <iostream>
using namespace std;

class Base {

public:
	virtual void func1() { 

		cout << "Base::func1" << endl;
	}

	virtual void func2() {

		cout << "Base::func2" << endl;

	}

	void func3() {

		cout << "Base::func3" << endl;
	}
};

class Derived : public Base {

public:
	void func1() { // 부모클래스에도 있는 fucn1()을 오버라이딩 중

		cout << "Derived::func1()" << endl;
	}

	void func2() {

		cout << "Derived::func2()" << endl;

	}

	void func3() {

		cout << "Derived::func3()" << endl;
	}

	void func4() {

		cout << "Dervied::func4()" << endl;
	}
};

int main() {

	Base b;
	Derived d;

	Base* pb = new Derived(); // 부모형의 객체 포인터를 이용해서 부모의 멤버함수만 접근가능
	pb->func1();
	pb->func2();
	pb->func3();

	//자식 객체에 있는 함수에 접근하고 싶음 -> 부모의 멤버함수에 virtual을 붙여주면 유도클래스의 오버라이딩 된 함수가 출력됨.
	return 0;
}