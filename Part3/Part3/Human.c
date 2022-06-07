#include <stdio.h>

typedef struct human {

	char name[20];
	int age;
	char job[10];

}Human;

void Showdata(Human h) {

	printf("이름 : %s, 나이 : %d, 직업 : %s\n", h.name, h.age, h.job);
}

int main() {

	Human h1 = { "홍길동", 20, "학생" };
	Showdata(h1);
	return 0;
}