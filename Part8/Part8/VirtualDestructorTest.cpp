#include <iostream>
using namespace std;

class Base {

	int num1;

public:
	Base(int an) {

		num1 = an;
		cout << num1 << " : Base ������" << endl;
	}

	virtual ~Base() { // 4. �Ҹ��� �տ� virtual�� �ҷ� ���� �Ҹ��ڸ� ��������. �׷� 33�� �ش��ϴ� �Ҹ��ڰ� �������.
		              //    �θ�Ŭ������ �ڽ�Ŭ������ ����ų �� �ڽ�Ŭ������ �ش��ϴ� �Ҹ��ڰ� ���� �ȵǴ� ������ ����.
		              //    �װ� �ذ��ϱ� ���ؼ� ���� �Ҹ��ڸ� ����ؼ� �ڽ�Ŭ������ �Ҹ��ڸ� �������.

		cout << num1 << " : Base �Ҹ���" << endl;
	}

	virtual void func() { // 3. virutal�� �����Լ��� �ٲ㵵 33�� �Ҹ��ڰ� ������ ����.

		cout << "Base::func()" << endl;
	}
};

class Derived : public Base {

	int num2;

public:

	Derived(int an1, int an2) : Base(an1) {

		num2 = an2;
		cout << num2 << " : Derived ������" << endl;
	}

	~Derived() {

		cout << num2 << " : Derived �Ҹ���" << endl;
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

	Base* pb = new Derived(3, 33); // 1. 3, 33�� �ش��ϴ� �Ҹ��ڰ� �������� ����.
	pb->func();

	delete pb; // 2. Base�� ���� �����͸� delete ���༭ 3�� �ش��ϴ� �Ҹ��ڴ� ����. �׷� 33�� �ش��ϴ� �Ҹ��ڴ� ���?

	return 0;
}