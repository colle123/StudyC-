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

		cout << "나는 디폴트 생성자" << endl;
	}

	Ctime(int an, int am, int as) : hour(an), min(am), sec(as) { // column 초기화 형태

	}
	//void setTime(int ah, int am, int as) {
	//	hour = ah;
	//	min = am;
	//	sec = as;
	//}
	void getTime() const
	{
		printf("현재시간 %d시 %d분 %d초 입니다.\n", hour, min, sec);
	}


};

int main() {

	Ctime t(14, 59, 12);
	t.getTime();

	return 0;
}