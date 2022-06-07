#include <iostream>
using namespace std;

class SoSimple {

private:
	static int simObjCnt;

public:
	SoSimple() {

		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};

int SoSimple::simObjCnt = 0; // Static 변수는 메인함수가 실행되기 전에 무조건 초기화 돼야함

class SoComplex {

private:
	static int cmxObjCnt; 

public:
	SoComplex() {

		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}

	SoComplex(SoComplex& copy) {

		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	
};

int SoComplex::cmxObjCnt = 0;

int main() {

	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2(cmx1);
	SoComplex();

	return 0;
}