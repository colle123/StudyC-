#include <iostream>
#include <cstring>
using namespace std;

class SoSimple {

private:
	int num;
	
public:
	SoSimple(int n) : num(n) {

		this->num = num; // this가 객체 자기자신의 주소를 가르키니 그 주소값의 멤버인 num을 가져오면 매개변수 num과 헷갈릴게 없음.
		cout << "num = " << num << ", ";
		cout << "address = " << this << endl;

	}

	void ShowSimpleData() {

		cout << num << endl;

	}

	SoSimple* GetThisPointer() {

		return this;

	}
};

int main() {

	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer(); // 포인터 ptr1은 객체 자체의 주소값을 가진다는걸 의미
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();

	return 0;
}