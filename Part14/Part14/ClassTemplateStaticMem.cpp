#include <iostream>
using namespace std;

template <typename T>
class SimpleStaticMem {

private:
	static T mem;

public:
	void AddMem(T num) { mem += num; }
	void ShowMem() { cout << mem << endl; }
};

template <typename T>
T SimpleStaticMem<T>::mem = 0;

int main() {

	SimpleStaticMem<int> obj1;
	SimpleStaticMem<int> obj2;
	obj1.AddMem(2);
	obj2.AddMem(3);
	obj1.ShowMem();
	SimpleStaticMem<long> obj3; 
	SimpleStaticMem<long> obj4;
	obj3.AddMem(100);
	obj4.ShowMem(); // 105가 아니라 100이 나오는건 int와 long의 자료형이 다르기 때문에 각각 static num이 생성됨

	return 0;
}