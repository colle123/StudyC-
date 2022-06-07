#include <iostream>
using namespace std;

class Human {

private:
	char name[20];
	int age;
public:

	Human(const char* name, int age) {

		strcpy(this->name, name);
		this->age = age;

		cout << "������ ȣ��" << endl;
	}
	void viewHuman() {

		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}

	Human(const Human& other) { // & �ϳ� �ִ°� lvalue ����

		cout << "���� ������ ȣ��" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
	}

	Human(Human&& other) noexcept{ // && �ΰ� ������ Rvalue ����
		cout << "�̵� ������ ȣ��" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
};

int main() {

	// �̵� �����ڴ� Rvalue(Right value)�� ���� �� ���� -> �ӽð�ü�� �� ����� ������ ��������ں��� �ӵ��� ����.
	Human H1("������", 30);
	H1.viewHuman();

	Human H2(H1);
	H2.viewHuman();

	Human H3(move(H1));
	H3.viewHuman();

	//int num = 10; // num - lvalue(left value) = ����� �� ��, 10 - Rvalue(Right value) = ���, ����
	//int& rnum = num; // - lvalue ����

	//int&& rrnum = 100; // - Rvalue ���� - �ӽð�ü�� ������ �ʰ� rvalue�� ���� �� �� �ְ� ��.

	//cout << rnum << endl;
	//cout << rrnum << endl;

	return 0;
}