#include <iostream>
using namespace std;

class AAA {

public:

	AAA() { // 디폴트 생성자 - 생성자를 정의하지 않으면 C++컴파일러에 의해서 디폴트 생성자라는 것이 자동으로 삽입
		    // 모든 객체는 한 번의 생성자 호출을 동반함. 이는 new를 이용한 객체의 동적할당에도 해당하는 이야기
		    // 인자를 가지지 않는 객체는 생성이 불가능함.

		cout << "empty object" << endl;
	}

	void ShowYourName() {

		cout << "I'm class AAA" << endl;
	}
};

class BBB {

private:
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n) : ref(r), num(n) {

		// empty constructor body

	}

	void ShowYourName() {

		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;

	}
};

int main() {

	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}