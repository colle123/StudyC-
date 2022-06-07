#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref; 
}

int main() {

	int num1 = 1;
	int num2 = RefRetFuncOne(num1); // 참조자로 num1의 값에 접근하는게 아니라
	                                // num1의 값을 단순히 num2에 대입함.

	num1 += 1;
	num2 += 100;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}