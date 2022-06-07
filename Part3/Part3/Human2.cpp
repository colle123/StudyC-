/* CPP 구조체 */

#include <stdio.h>

typedef struct human {

	char name[20];
	int age;
	char job[10];

	void Showdata() {

		printf("이름 : %s, 나이 : %d, 직업 : %s\n", name, age, job);
		// 구조체 안에서 직접 받기 때문에 매개변수나 멤버 앞에 구조체 이름 + 멤버접근지정자를 안 붙여도 됨
	}

}Human;

int main() {

	Human h1 = { "홍길동", 20, "학생" };

	h1.Showdata();

	return 0;
}