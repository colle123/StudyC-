#include <iostream>
#include <string>
using namespace std;

int main() {

	string str1 = "I like ";
	string str2 = "string class";
	string str3 = str1 + str2; // string 헤더파일에서는 연산자 오버로딩이 되어있어 이런 문자열간 덧셈연산도 가능
	string str5("good moring");

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	cout << str3.at(5) << endl; // at()은 인덱스로 접근해서 거기있는 요소를 불러옴.
	cout << str3.front() << endl; // front()는 문자열의 가장 첫번째 문자를 출력
	cout << str3.back() << endl; // back()은 문자열의 가장 마지막 문자를 출력
	cout << str3.size() << endl; // size()은 str3의 크기를 구하는 멤버함수. string 문자열 클래스를 쓰면 문자열 끝에 널문자가 안붙음.
	cout << str3.capacity() << endl; // capacity() 객체 자체가 메모리에 할당된 공간의 크기를 구함. size()와 구별할것

	/*str1 += str2;
	if (str1 == str3)
		cout << "동일 문자열!" << endl;
	else
		cout << "동일하지 않은 문자열!" << endl;

	string str4;
	cout << "문자열 입력 : ";
	cin >> str4;
	cout << "입력한 문자열 : " << str4 << endl;*/

	return 0;
}