#include <iostream>
#include <string>
using namespace std;

int main() {

	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2; // string ������Ͽ����� ������ �����ε��� �Ǿ��־� �̷� ���ڿ��� �������굵 ����
	string str5("good moring");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	cout << str3.at(5) << endl; // at()�� �ε����� �����ؼ� �ű��ִ� ��Ҹ� �ҷ���.
	cout << str3.front() << endl; // front()�� ���ڿ��� ���� ù��° ���ڸ� ���
	cout << str3.back() << endl; // back()�� ���ڿ��� ���� ������ ���ڸ� ���
	cout << str3.size() << endl; // size()�� str3�� ũ�⸦ ���ϴ� ����Լ�. string ���ڿ� Ŭ������ ���� ���ڿ� ���� �ι��ڰ� �Ⱥ���.
	cout << str3.capacity() << endl; // capacity() ��ü ��ü�� �޸𸮿� �Ҵ�� ������ ũ�⸦ ����. size()�� �����Ұ�

	/*str1 += str2;
	if (str1 == str3)
		cout << "���� ���ڿ�!" << endl;
	else
		cout << "�������� ���� ���ڿ�!" << endl;

	string str4;
	cout << "���ڿ� �Է� : ";
	cin >> str4;
	cout << "�Է��� ���ڿ� : " << str4 << endl;*/

	return 0;
}