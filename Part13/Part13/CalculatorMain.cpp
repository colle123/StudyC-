#include "Calculator.h"
#include "Calculator.cpp"

int main() {

	Cal<int> cal;
	int num1, num2, select;

	cout << "¼ýÀÚ µÎ°³¸¦ ÀÔ·Â ÇØÁÖ¼¼¿ä : ";
	cin >> num1;
	cin >> num2;

	cout << "1. µ¡¼À  2. »©±â  3. °ö¼À  4.³ª´°¼À : ";
	cin >> select;
	
	switch (select) {

	case 1:

		cout << "°á°ú : " << cal.Add(num1, num2) << endl;
		break;
		
	case 2:

		cout << "°á°ú : " << cal.Minus(num1, num2) << endl;
		break;

	case 3:

		cout << "°á°ú : " << cal.Multiplication(num1, num2) << endl;
		break;
		
	case 4:

		cout << "°á°ú : " << cal.Division(num1, num2) << endl;
		break;

	default:

		cout << "Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù." << endl;
		system("pause");
	}


	return 0;
}