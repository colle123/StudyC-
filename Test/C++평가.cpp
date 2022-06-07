/*
C++평가
이름: 윤수한
2022.03.28
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void MainMenu();
void Add_Product();
void Search_Product();
void Delete_Product();

class Handler {

public:

	void Add_Book();
	void Add_CD();
	void Add_Cellphone();
	void Search_Book();
	void Search_CD();
	void Search_Cellphone();
	void Delete_Book();
	void Delete_CD();
	void Delete_Cellphone();
};

class Product {

private:

	int ID;
	int Price;
	string Description; // string으로 선언 했기 때문에 strcpy로 초기화나 소멸자 사용 x

public:

	// Product 생성자를 이용해서 Product를 초기화 시켜줌.
	Product(int id, int p, string Des) : ID(id), Price(p) {

		Description = Des;
	}

	// getProduct() 함수는 Derived class에서 오버라이딩 되기 때문에 가상함수로 만들어줌.
	virtual void getProduct() {

		cout << "───────────────────────────" << endl;
		cout << "ID : " << ID + 1 << endl;
		cout << "가 격 : " << Price << endl;
		cout << "개 요 : " << Description << endl;

	}

};

class Book : public Product { // Product class를 Base로 한 Book class 생성

private:
	string Title;
	string Writer;
	string Publisher;

public:

	// 생성자를 통해서 Book class를 초기화 시켜줌.
	Book(int id, int p, string Des, string T, string W, string Pu) : Product(id, p, Des) {

		Title = T;
		Writer = W;
		Publisher = Pu;
	}

	// getProduct() 오버라이딩.
	void getProduct() {

		Product::getProduct();
		cout << "제 목 : " << Title << endl;
		cout << "작 가 : " << Writer << endl;
		cout << "출판사 : " << Publisher << endl;
		cout << "───────────────────────────" << endl;

	}
};

class CD : public Product { // Product class를 Base로 한 CD class 생성

private:

	string Title;
	string Singer;

public:

	// 생성자를 통해서 CD class를 초기화 시켜줌.
	CD(int id, int p, string Des, string T, string S) : Product(id, p, Des) {

		Title = T;
		Singer = S;
	}

	// getProduct() 오버라이딩.
	void getProduct() {

		Product::getProduct();
		cout << "제 목 : " << Title << endl;
		cout << "가 수 : " << Singer << endl;
		cout << "───────────────────────────" << endl;

	}
};

class Cellphone : public Product { // Product class를 Base로 한 Cellphone class 생성

private:

	string Model;
	string Manufacturer;

public:

	// 생성자를 통해서 Cellphone class를 초기화 시켜줌.
	Cellphone(int id, int p, string Des, string Mo, string Ma) :Product(id, p, Des) {

		Model = Mo;
		Manufacturer = Ma;
	}

	// getProduct() 오버라이딩.
	void getProduct() {

		Product::getProduct();
		cout << "모델명 : " << Model << endl;
		cout << "제조사 : " << Manufacturer << endl;
		cout << "───────────────────────────" << endl;

	}
};

#define SIZE 30

static int id = 0; // id를 매기기 위한 전역변수 statc int id 선언, 초기화
Product* pobj[100];
vector<int> v_Book; // int 자료형인 int를 통해 pobj 중에서 Book의 데이터만 가져와 vector에 저장
vector<int> v_CD; // int 자료형인 int를 통해 pobj 중에서 CD의 데이터만 가져와 vector에 저장
vector<int> v_Cellphone; // int 자료형인 int를 통해 pobj 중에서 Cellphone의 데이터만 가져와 vector에 저장

void Handler::Add_Book() {

	int price;
	char description[SIZE];
	char title[SIZE];
	char writer[SIZE];
	char publisher[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "가 격 : "; cin >> price;
	cout << "개 요 : "; cin >> description;
	cout << "제 목 : "; cin >> title;
	cout << "작 가 : "; cin >> writer;
	cout << "출판사 : "; cin >> publisher;

	// Book 객체를 생성해서 pobj에 저장.
	pobj[id] = new Book(id, price, description, title, writer, publisher);

	// pobj에서 Book 데이터만 가져오기 위해 Index인 id를 vector에 저장시켜줌
	v_Book.push_back(id);

	id++;
}

void Handler::Add_CD() {

	int price;
	char description[SIZE];
	char title[SIZE];
	char singer[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "가 격 : "; cin >> price;
	cout << "개 요 : "; cin >> description;
	cout << "제 목 : "; cin >> title;
	cout << "가 수 : "; cin >> singer;

	// CD 객체를 생성해서 pobj에 저장.
	pobj[id] = new CD(id, price, description, title, singer);

	// pobj에서 CD 데이터만 가져오기 위해 Index인 id를 vector에 저장시켜줌
	v_CD.push_back(id);

	id++;
}

void Handler::Add_Cellphone() {

	int price;
	char description[SIZE];
	char model[SIZE];
	char manufacturer[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "가 격 : "; cin >> price;
	cout << "개 요 : "; cin >> description;
	cout << "모델명 : "; cin >> model;
	cout << "제조사 : "; cin >> manufacturer;

	// Cellphone 객체를 생성해서 pobj에 저장.
	pobj[id] = new Cellphone(id, price, description, model, manufacturer);

	// pobj에서 Cellphone 데이터만 가져오기 위해 Index인 id를 vector에 저장시켜줌
	v_Cellphone.push_back(id);

	id++;
}

void Handler::Search_Book() {

	vector<int>::iterator iter_book;

	if (!v_Book.empty()) { // v_Book에 저장된 index가 비어있지 않으면 실행

		cout << "────────<Book 목록>────────" << endl;

		for (iter_book = v_Book.begin(); iter_book != v_Book.end(); iter_book++)
		{

			pobj[*iter_book]->getProduct();

		}
	}

	else cout << "등록된 Book이 없습니다" << endl; // v_Book이 비어있는경우 실행

	system("pause");
}

void Handler::Search_CD() {

	vector<int>::iterator iter_cd;

	if (!v_CD.empty()) { // v_CD에 저장된 index가 비어있지 않으면 실행

		cout << "─────────<CD 목록>─────────" << endl;

		for (iter_cd = v_CD.begin(); iter_cd != v_CD.end(); iter_cd++)
		{

			pobj[*iter_cd]->getProduct();
		}
	}

	else cout << "등록된 CD가 없습니다" << endl; // v_CD가 비어있는경우 실행

	system("pause");
}

void Handler::Search_Cellphone() {

	vector<int>::iterator iter_cellphone;

	if (!v_Cellphone.empty()) { // v_Cellphone에 저장된 index가 비어있지 않으면 실행

		cout << "──────<Cellphone 목록>──────" << endl;

		for (iter_cellphone = v_Cellphone.begin(); iter_cellphone != v_Cellphone.end(); iter_cellphone++)
		{
			pobj[*iter_cellphone]->getProduct();

		}

	}

	else cout << "등록된 Cellphone이 없습니다" << endl; // v_Cellphone가 비어있는경우 실행

	system("pause");

}

void Handler::Delete_Book() {

	if (!v_Book.empty()) { // v_Book에 저장된 index가 비어있지 않으면 실행

		cout << "등록된 Book ID : ";

		for (int i = 0; i < v_Book.size(); i++)
		{

			cout << v_Book[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "지우고 싶은 ID를 선택하세요 : "; cin >> Delete;

		for (int i = 0; i < v_Book.size(); i++)
		{
			if (Delete - 1 == v_Book[i]) {

				v_Book.erase(v_Book.begin() + i);
				cout << "ID : " << Delete << "이(가) 삭제되었습니다." << endl;
				break;
			}

		}
	}

	else cout << "등록된 Book이 없습니다" << endl;

	system("pause");
}

void Handler::Delete_CD() {

	if (!v_CD.empty()) {

		cout << "등록된 CD ID : ";

		for (int i = 0; i < v_CD.size(); i++)
		{

			cout << v_CD[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "지우고 싶은 ID를 선택하세요 : "; cin >> Delete;

		for (int i = 0; i < v_CD.size(); i++)
		{
			if (Delete - 1 == v_CD[i]) {

				v_CD.erase(v_CD.begin() + i);
				cout << "ID : " << Delete << "이(가) 삭제되었습니다." << endl;
				break;
			}

		}
	}

	else cout << "등록된 CD가 없습니다" << endl;

	system("pause");
}

void Handler::Delete_Cellphone() {

	if (!v_Cellphone.empty()) { // v_Cellphone에 저장된 index가 비어있지 않으면 실행

		cout << "등록된 Cellphone ID : ";

		for (int i = 0; i < v_Cellphone.size(); i++)
		{

			cout << v_Cellphone[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "지우고 싶은 ID를 선택하세요 : "; cin >> Delete;

		for (int i = 0; i < v_Cellphone.size(); i++)
		{
			if (Delete - 1 == v_Cellphone[i]) {

				v_Cellphone.erase(v_Cellphone.begin() + i);
				cout << "ID : " << Delete << "이(가) 삭제되었습니다." << endl;
				break;
			}
		}
	}

	else cout << "등록된 Cellphone이 없습니다" << endl;
	system("pause");
}

void MainMenu() {

	while (1) {

		system("cls");

		int select;

		cout << "+++++++++++++++ POS +++++++++++++++" << endl << endl;
		cout << " 1. 상품추가" << endl;
		cout << " 2. 상품조회" << endl;
		cout << " 3. 상품삭제" << endl;
		cout << " 4. 프로그램 종료" << endl << endl;

		cout << " 입 력 : "; cin >> select;
		cout << endl;

		switch (select) {

		case 1:
			Add_Product();
			break;

		case 2:
			Search_Product();
			break;

		case 3:
			Delete_Product();
			break;

		case 4:
			exit(1);

		default:

			cout << "올바른 입력이 아닙니다." << endl;
			system("pause");
		}
	}

}

void Add_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " 추가상품 선택 :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. 뒤로가기" << endl << endl;

		cout << " 입 력 : "; cin >> select;
		cout << endl;

		switch (select) {

		case 1:
			H.Add_Book();
			return;

		case 2:
			H.Add_CD();
			return;

		case 3:
			H.Add_Cellphone();
			return;
		case 4:
			MainMenu();
			return;

		default:

			cout << "올바른 입력이 아닙니다." << endl;
			system("pause");
		}
	}
}

void Search_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " 조회상품 선택 :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. 뒤로가기" << endl << endl;

		cout << "입 력 : "; cin >> select;
		cout << endl;

		switch (select) {

		case 1:
			H.Search_Book();
			return;

		case 2:
			H.Search_CD();
			return;

		case 3:
			H.Search_Cellphone();
			return;

		case 4:
			MainMenu();
			return;

		default:

			cout << "올바른 입력이 아닙니다." << endl;
			system("pause");
		}
	}
}

void Delete_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " 삭제상품 선택 :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. 뒤로가기" << endl << endl;

		cout << "입 력 : "; cin >> select;
		cout << endl;

		switch (select) {

		case 1:
			H.Delete_Book();
			return;

		case 2:
			H.Delete_CD();
			return;

		case 3:
			H.Delete_Cellphone();
			return;

		case 4:
			MainMenu();
			return;

		default:

			cout << "올바른 입력이 아닙니다." << endl;
			system("pause");
		}
	}
}

int main() {

	MainMenu();

	return 0;
}

