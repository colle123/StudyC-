#include <iostream>
using namespace std;

int RefRetFuncOne(int& ref) // ��ȯ���� �����ڰ� �ƴ϶� ���� �ڷ����� int��
{
	ref++;
	return ref;
}

int main() {

	int num1 = 1;
	int num2 = RefRetFuncOne(num1);

	num1 += 1;
	num2 += 100;

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}