#include "Calculator.h"
#include "Calculator.cpp"

int main() {

	Cal<int> cal;
	int num1, num2, select;

	cout << "���� �ΰ��� �Է� ���ּ��� : ";
	cin >> num1;
	cin >> num2;

	cout << "1. ����  2. ����  3. ����  4.������ : ";
	cin >> select;
	
	switch (select) {

	case 1:

		cout << "��� : " << cal.Add(num1, num2) << endl;
		break;
		
	case 2:

		cout << "��� : " << cal.Minus(num1, num2) << endl;
		break;

	case 3:

		cout << "��� : " << cal.Multiplication(num1, num2) << endl;
		break;
		
	case 4:

		cout << "��� : " << cal.Division(num1, num2) << endl;
		break;

	default:

		cout << "�߸��� �Է��Դϴ�." << endl;
		system("pause");
	}


	return 0;
}