/* CPP ����ü */

#include <stdio.h>

typedef struct human {

	char name[20];
	int age;
	char job[10];

	void Showdata() {

		printf("�̸� : %s, ���� : %d, ���� : %s\n", name, age, job);
		// ����ü �ȿ��� ���� �ޱ� ������ �Ű������� ��� �տ� ����ü �̸� + ������������ڸ� �� �ٿ��� ��
	}

}Human;

int main() {

	Human h1 = { "ȫ�浿", 20, "�л�" };

	h1.Showdata();

	return 0;
}