#include <iostream>
#include <vector>
using namespace std;

int main() {

	//vector�� ���� ���ؼ��� vector ���̺귯�� �ܿ��� namespace std�� �ؾ���.
	//vector�� ���� �����Ϸ��� �ڵ����� �迭 ���·� �ʱ�ȭ ������.

	vector<int> v;
	
	/*for (int i = 0; i < 20; i++) {

		v.push_back(i + 1);

		cout << "v[" << i << "] = " << v[i] << endl;
	}*/

	vector<int> v1;

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);

	//for (int i = 0; i < v1.size(); i++) {

	//	cout << "v1[" << i << "] = " << v1[i] << endl;

	//}

	vector<string>::iterator iter;

	//for (iter = v1.begin(); iter != v1.end(); iter++) {

	//	cout << *iter << endl;

	//}

	vector<string> s;

	s.push_back("tiger");
	s.push_back("lion");
	s.push_back("elephant");
	s.push_back("cow");

	for (iter = s.begin(); iter != s.end(); iter++) {
		if (*iter == "lion") {
			s.erase(iter);
			break;
		}
	}

	for (iter = s.begin(); iter < s.end(); iter++) { // iter�� ����Ҷ� ���� ����ؼ� ������ ��Ÿ���� ����Լ��� begin() -> front()�� �����ϱ�
		                                              // end()�� ������ �����Լ��� ��Ÿ���� ����Լ� < �� ����ص� ������ !=�� �ַ� �����.
		cout << *iter << endl;
	}

	cout << s.front() << endl;

	return 0;
}