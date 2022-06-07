#include <iostream>
#include <vector>
using namespace std;

int main() {

	//vector를 쓰기 위해서는 vector 라이브러리 외에도 namespace std를 해야함.
	//vector를 쓰면 컴파일러가 자동으로 배열 형태로 초기화 시켜줌.

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

	for (iter = s.begin(); iter < s.end(); iter++) { // iter을 사용할때 같이 사용해서 시작을 나타내는 멤버함수가 begin() -> front()와 구별하기
		                                              // end()는 마지막 다음함수를 나타내는 멤버함수 < 을 사용해도 되지만 !=을 주로 사용함.
		cout << *iter << endl;
	}

	cout << s.front() << endl;

	return 0;
}