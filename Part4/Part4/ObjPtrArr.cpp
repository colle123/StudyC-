#include <iostream>
#include <cstring>
using namespace std;

class Person {


private:

	char* name;
	int age;

public:

	Person(char* myname, int myage) {

		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person() { 

		name = NULL;
		age = 0;
		cout << "called Person()" << endl;

	}

	void SetPersonInfo(char* myname, int myage) {

		name = myname;
		age = myage;

	}

	void ShowPersonInfo() const {

		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;

	}

	~Person() {

		delete[]name;
		cout << "called destructor" << endl;
	}
};

int main() {

	Person* parr[3];
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++) {

		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		parr[i] = new Person(namestr, age);
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();
	delete parr[0];
	delete parr[1];
	delete parr[2];

	return 0;
}

// this 포인터의 활용
// 객체는 생성되면서 각각의 멤버변수를 가지지만(객체별로 멤버변수를 할당) 멤버함수는 공유해서 사용함. 
// -> 어떤 객체가 호출했는지를 모르기 때문에 This 포인터라는 개념이 나옴.
// 객체를 나타내는 포인터를 This 포인터라고 함.
// 
//