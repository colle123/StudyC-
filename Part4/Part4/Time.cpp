#include <iostream>
#include <stdio.h>
using namespace std;

class Ctime {

private:
	int hour;
	int min;
	int sec;

public:
	Ctime() {

		cout << "���� ����Ʈ ������" << endl;
	}

	Ctime(int an, int am, int as) : hour(an), min(am), sec(as) { // column �ʱ�ȭ ����

	}
	//void setTime(int ah, int am, int as) {
	//	hour = ah;
	//	min = am;
	//	sec = as;
	//}
	void getTime() const
	{
		printf("����ð� %d�� %d�� %d�� �Դϴ�.\n", hour, min, sec);
	}


};

int main() {

	Ctime t(14, 59, 12);
	t.getTime();

	return 0;
}