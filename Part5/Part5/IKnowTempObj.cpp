#include <iostream>
using namespace std;

class Temporary {

private:
	int num;

public:
	Temporary(int n) : num(n) {

		cout << "create obj : " << num << endl;
	}

	~Temporary() {

		cout << "destroy obj : " << num << endl;
	}

	void ShowTempInfo() {

		cout << "My num is " << num << endl;
	}
};

int main() {

	Temporary t1(100); // 객체에 이름을 부여해서 생성하지 않았기 때문에(Temporary t1(100)처럼) 이름이 없는 임시객체가 생성함
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);
	cout << "********** end of main!" << endl << endl;

	return 0;
}