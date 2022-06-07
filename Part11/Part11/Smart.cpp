#include <iostream>
#include <memory>
using namespace std;

class AAA {

public:
	AAA(){
	
		std::cout << "AAA()" << std::endl;
	}
	~AAA(){
	
		std::cout << "~AAA()" << std::endl;

	}
	void func() {

		std::cout << "AAA::func()" << std::endl;
	}
};

int main() {

	//unique_ptr<AAA> ptr1 = make_unique<AAA>();
	// make_unique �ȿ��� AAA ũ���� �޸𸮸� �����Ҵ��Ͽ� ptr1�� �Ҵ�����.

	//ptr1->func();

	shared_ptr<AAA> ptr2 = make_shared<AAA>();
	ptr2->func();

	cout << "count : " << ptr2.use_count() << endl;
	{

		shared_ptr<AAA> ptr3(ptr2);
		cout << "count : " << ptr3.use_count() << endl;
		cout << "count : " << ptr2.use_count() << endl;

	}
	cout << "count : " << ptr2.use_count() << endl;
	return 0;
}