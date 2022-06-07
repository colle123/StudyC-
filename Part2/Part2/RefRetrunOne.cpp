#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref; // 함수 반환 후 ref는 기존에 참조하던 값에 더 이상 접근 불가
}

int main() {

	int num1 = 1;
	int& num2 = RefRetFuncOne(num1);

	num1++;
	num2++;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;
	
	return 0;
}