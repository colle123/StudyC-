#include <iostream>
using namespace std;

class Base {

	int num1;

public:
	Base(int an) {

		num1 = an;
		cout << num1 << " : Base 생성자" << endl;
	}

	virtual ~Base() { // 4. 소멸자 앞에 virtual을 불러 가상 소멸자를 생성해줌. 그럼 33에 해당하는 소멸자가 만들어짐.
		              //    부모클래스로 자식클래스를 가리킬 때 자식클래스에 해당하는 소멸자가 생성 안되는 문제가 있음.
		              //    그걸 해결하기 위해서 가상 소멸자를 사용해서 자식클래스의 소멸자를 만들어줌.

		cout << num1 << " : Base 소멸자" << endl;
	}

	virtual void func() { // 3. virutal인 가상함수로 바꿔도 33인 소멸자가 만들지 않음.

		cout << "Base::func()" << endl;
	}
};

class Derived : public Base {

	int num2;

public:

	Derived(int an1, int an2) : Base(an1) {

		num2 = an2;
		cout << num2 << " : Derived 생성자" << endl;
	}

	~Derived() {

		cout << num2 << " : Derived 소멸자" << endl;
	}

	void func() {

		cout << "Derived::func()" << endl;
	}
};

int main() {

	Base b(1);
	b.func();

	Derived d(2, 22);
	d.func();

	Base* pb = new Derived(3, 33); // 1. 3, 33에 해당하는 소멸자가 생성되지 않음.
	pb->func();

	delete pb; // 2. Base에 대한 포인터를 delete 해줘서 3에 해당하는 소멸자는 생성. 그럼 33에 해당하는 소멸자는 어떻게?

	return 0;
}