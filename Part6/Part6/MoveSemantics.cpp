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

		cout << "생성자 호출" << endl;
	}
	void viewHuman() {

		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	Human(const Human& other) { // & 하나 있는게 lvalue 참조

		cout << "복사 생성자 호출" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
	}

	Human(Human&& other) noexcept{ // && 두개 있으면 Rvalue 참조
		cout << "이동 생성자 호출" << endl;
		strcpy(name, other.name);
		age = other.age;
	}
};

int main() {

	// 이동 생성자는 Rvalue(Right value)만 받을 수 있음 -> 임시객체를 안 만들기 때문에 복사생성자보다 속도가 빠름.
	Human H1("윤수한", 30);
	H1.viewHuman();

	Human H2(H1);
	H2.viewHuman();

	Human H3(move(H1));
	H3.viewHuman();

	//int num = 10; // num - lvalue(left value) = 상수는 못 옴, 10 - Rvalue(Right value) = 상수, 변수
	//int& rnum = num; // - lvalue 참조

	//int&& rrnum = 100; // - Rvalue 참조 - 임시객체를 만들지 않고 rvalue를 참조 할 수 있게 함.

	//cout << rnum << endl;
	//cout << rrnum << endl;

	return 0;
}