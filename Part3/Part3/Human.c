#include <stdio.h>

typedef struct human {

	char name[20];
	int age;
	char job[10];

}Human;

void Showdata(Human h) {

	printf("�̸� : %s, ���� : %d, ���� : %s\n", h.name, h.age, h.job);
}

int main() {

	Human h1 = { "ȫ�浿", 20, "�л�" };
	Showdata(h1);
	return 0;
}