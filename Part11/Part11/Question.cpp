#include <iostream>
#include <cstring>
using namespace std;

class Human {

private:
	char* name;
	int age;

public:

	Human(const char* myname, int myage) {

		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Human(const Human& ref) {

		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;

	}

	~Human() {

		delete[]name;
	}

	Human& operator=(const Human& ref) {

		delete[]name;
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		return *this;
	}

	void printHuman() const {

		cout << "이 름 : " << name << endl;
		cout << "나 이 : " << age << endl;

	}
};

int main() {

	Human man("이순신", 50);
	Human man1(man);

	Human xman("홍길동", 29);
	xman = man;

	man.printHuman();
	man1.printHuman();
	xman.printHuman();

	return 0;
}
