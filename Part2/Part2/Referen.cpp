#include <iostream>
using namespace std;

int main() {

	int num1 = 1020;
	int &num2 = num1; // 참조자는 변수대상으로만 참조가 가능하고, 꼭 누군가를 참조해야하며, NULL은 참조가 안 됨.

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;

	return 0;
}
