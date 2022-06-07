#include <iostream>
using namespace std;

class AAA {

private:
	int num;

public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {

		AAA* ptr = new AAA(n);
		return *ptr;
	}

	void ShowNum() const { cout << num << endl; }

	~AAA() {

		cout << "나는 소멸자입니다!!" << endl;
	}

private:

	AAA(int n) : num(n){}

};

int main() {

	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;

	return 0; // 소멸자가 없으면 main 함수가 끝나면 자동적으로 소멸됨

	// 소멸자는 생성자와 똑같이 Class 이름과 똑같은 대신 생성자와 구분 해주기 위해서 Class 이름 앞에 ~를 붙여줌
	// 소멸자는 대개 생성자에서 할당한 리소스(new로 동적할당 받은)의 소멸에 사용
}