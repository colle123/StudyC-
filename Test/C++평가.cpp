/*
C++��
�̸�: ������
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
	string Description; // string���� ���� �߱� ������ strcpy�� �ʱ�ȭ�� �Ҹ��� ��� x

public:

	// Product �����ڸ� �̿��ؼ� Product�� �ʱ�ȭ ������.
	Product(int id, int p, string Des) : ID(id), Price(p) {

		Description = Des;
	}

	// getProduct() �Լ��� Derived class���� �������̵� �Ǳ� ������ �����Լ��� �������.
	virtual void getProduct() {

		cout << "������������������������������������������������������" << endl;
		cout << "ID : " << ID + 1 << endl;
		cout << "�� �� : " << Price << endl;
		cout << "�� �� : " << Description << endl;

	}

};

class Book : public Product { // Product class�� Base�� �� Book class ����

private:
	string Title;
	string Writer;
	string Publisher;

public:

	// �����ڸ� ���ؼ� Book class�� �ʱ�ȭ ������.
	Book(int id, int p, string Des, string T, string W, string Pu) : Product(id, p, Des) {

		Title = T;
		Writer = W;
		Publisher = Pu;
	}

	// getProduct() �������̵�.
	void getProduct() {

		Product::getProduct();
		cout << "�� �� : " << Title << endl;
		cout << "�� �� : " << Writer << endl;
		cout << "���ǻ� : " << Publisher << endl;
		cout << "������������������������������������������������������" << endl;

	}
};

class CD : public Product { // Product class�� Base�� �� CD class ����

private:

	string Title;
	string Singer;

public:

	// �����ڸ� ���ؼ� CD class�� �ʱ�ȭ ������.
	CD(int id, int p, string Des, string T, string S) : Product(id, p, Des) {

		Title = T;
		Singer = S;
	}

	// getProduct() �������̵�.
	void getProduct() {

		Product::getProduct();
		cout << "�� �� : " << Title << endl;
		cout << "�� �� : " << Singer << endl;
		cout << "������������������������������������������������������" << endl;

	}
};

class Cellphone : public Product { // Product class�� Base�� �� Cellphone class ����

private:

	string Model;
	string Manufacturer;

public:

	// �����ڸ� ���ؼ� Cellphone class�� �ʱ�ȭ ������.
	Cellphone(int id, int p, string Des, string Mo, string Ma) :Product(id, p, Des) {

		Model = Mo;
		Manufacturer = Ma;
	}

	// getProduct() �������̵�.
	void getProduct() {

		Product::getProduct();
		cout << "�𵨸� : " << Model << endl;
		cout << "������ : " << Manufacturer << endl;
		cout << "������������������������������������������������������" << endl;

	}
};

#define SIZE 30

static int id = 0; // id�� �ű�� ���� �������� statc int id ����, �ʱ�ȭ
Product* pobj[100];
vector<int> v_Book; // int �ڷ����� int�� ���� pobj �߿��� Book�� �����͸� ������ vector�� ����
vector<int> v_CD; // int �ڷ����� int�� ���� pobj �߿��� CD�� �����͸� ������ vector�� ����
vector<int> v_Cellphone; // int �ڷ����� int�� ���� pobj �߿��� Cellphone�� �����͸� ������ vector�� ����

void Handler::Add_Book() {

	int price;
	char description[SIZE];
	char title[SIZE];
	char writer[SIZE];
	char publisher[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "�� �� : "; cin >> price;
	cout << "�� �� : "; cin >> description;
	cout << "�� �� : "; cin >> title;
	cout << "�� �� : "; cin >> writer;
	cout << "���ǻ� : "; cin >> publisher;

	// Book ��ü�� �����ؼ� pobj�� ����.
	pobj[id] = new Book(id, price, description, title, writer, publisher);

	// pobj���� Book �����͸� �������� ���� Index�� id�� vector�� ���������
	v_Book.push_back(id);

	id++;
}

void Handler::Add_CD() {

	int price;
	char description[SIZE];
	char title[SIZE];
	char singer[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "�� �� : "; cin >> price;
	cout << "�� �� : "; cin >> description;
	cout << "�� �� : "; cin >> title;
	cout << "�� �� : "; cin >> singer;

	// CD ��ü�� �����ؼ� pobj�� ����.
	pobj[id] = new CD(id, price, description, title, singer);

	// pobj���� CD �����͸� �������� ���� Index�� id�� vector�� ���������
	v_CD.push_back(id);

	id++;
}

void Handler::Add_Cellphone() {

	int price;
	char description[SIZE];
	char model[SIZE];
	char manufacturer[SIZE];

	cout << "ID : " << id + 1 << endl;
	cout << "�� �� : "; cin >> price;
	cout << "�� �� : "; cin >> description;
	cout << "�𵨸� : "; cin >> model;
	cout << "������ : "; cin >> manufacturer;

	// Cellphone ��ü�� �����ؼ� pobj�� ����.
	pobj[id] = new Cellphone(id, price, description, model, manufacturer);

	// pobj���� Cellphone �����͸� �������� ���� Index�� id�� vector�� ���������
	v_Cellphone.push_back(id);

	id++;
}

void Handler::Search_Book() {

	vector<int>::iterator iter_book;

	if (!v_Book.empty()) { // v_Book�� ����� index�� ������� ������ ����

		cout << "����������������<Book ���>����������������" << endl;

		for (iter_book = v_Book.begin(); iter_book != v_Book.end(); iter_book++)
		{

			pobj[*iter_book]->getProduct();

		}
	}

	else cout << "��ϵ� Book�� �����ϴ�" << endl; // v_Book�� ����ִ°�� ����

	system("pause");
}

void Handler::Search_CD() {

	vector<int>::iterator iter_cd;

	if (!v_CD.empty()) { // v_CD�� ����� index�� ������� ������ ����

		cout << "������������������<CD ���>������������������" << endl;

		for (iter_cd = v_CD.begin(); iter_cd != v_CD.end(); iter_cd++)
		{

			pobj[*iter_cd]->getProduct();
		}
	}

	else cout << "��ϵ� CD�� �����ϴ�" << endl; // v_CD�� ����ִ°�� ����

	system("pause");
}

void Handler::Search_Cellphone() {

	vector<int>::iterator iter_cellphone;

	if (!v_Cellphone.empty()) { // v_Cellphone�� ����� index�� ������� ������ ����

		cout << "������������<Cellphone ���>������������" << endl;

		for (iter_cellphone = v_Cellphone.begin(); iter_cellphone != v_Cellphone.end(); iter_cellphone++)
		{
			pobj[*iter_cellphone]->getProduct();

		}

	}

	else cout << "��ϵ� Cellphone�� �����ϴ�" << endl; // v_Cellphone�� ����ִ°�� ����

	system("pause");

}

void Handler::Delete_Book() {

	if (!v_Book.empty()) { // v_Book�� ����� index�� ������� ������ ����

		cout << "��ϵ� Book ID : ";

		for (int i = 0; i < v_Book.size(); i++)
		{

			cout << v_Book[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "����� ���� ID�� �����ϼ��� : "; cin >> Delete;

		for (int i = 0; i < v_Book.size(); i++)
		{
			if (Delete - 1 == v_Book[i]) {

				v_Book.erase(v_Book.begin() + i);
				cout << "ID : " << Delete << "��(��) �����Ǿ����ϴ�." << endl;
				break;
			}

		}
	}

	else cout << "��ϵ� Book�� �����ϴ�" << endl;

	system("pause");
}

void Handler::Delete_CD() {

	if (!v_CD.empty()) {

		cout << "��ϵ� CD ID : ";

		for (int i = 0; i < v_CD.size(); i++)
		{

			cout << v_CD[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "����� ���� ID�� �����ϼ��� : "; cin >> Delete;

		for (int i = 0; i < v_CD.size(); i++)
		{
			if (Delete - 1 == v_CD[i]) {

				v_CD.erase(v_CD.begin() + i);
				cout << "ID : " << Delete << "��(��) �����Ǿ����ϴ�." << endl;
				break;
			}

		}
	}

	else cout << "��ϵ� CD�� �����ϴ�" << endl;

	system("pause");
}

void Handler::Delete_Cellphone() {

	if (!v_Cellphone.empty()) { // v_Cellphone�� ����� index�� ������� ������ ����

		cout << "��ϵ� Cellphone ID : ";

		for (int i = 0; i < v_Cellphone.size(); i++)
		{

			cout << v_Cellphone[i] + 1 << " ";

		}

		cout << endl;

		int Delete; cout << "����� ���� ID�� �����ϼ��� : "; cin >> Delete;

		for (int i = 0; i < v_Cellphone.size(); i++)
		{
			if (Delete - 1 == v_Cellphone[i]) {

				v_Cellphone.erase(v_Cellphone.begin() + i);
				cout << "ID : " << Delete << "��(��) �����Ǿ����ϴ�." << endl;
				break;
			}
		}
	}

	else cout << "��ϵ� Cellphone�� �����ϴ�" << endl;
	system("pause");
}

void MainMenu() {

	while (1) {

		system("cls");

		int select;

		cout << "+++++++++++++++ POS +++++++++++++++" << endl << endl;
		cout << " 1. ��ǰ�߰�" << endl;
		cout << " 2. ��ǰ��ȸ" << endl;
		cout << " 3. ��ǰ����" << endl;
		cout << " 4. ���α׷� ����" << endl << endl;

		cout << " �� �� : "; cin >> select;
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

			cout << "�ùٸ� �Է��� �ƴմϴ�." << endl;
			system("pause");
		}
	}

}

void Add_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " �߰���ǰ ���� :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. �ڷΰ���" << endl << endl;

		cout << " �� �� : "; cin >> select;
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

			cout << "�ùٸ� �Է��� �ƴմϴ�." << endl;
			system("pause");
		}
	}
}

void Search_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " ��ȸ��ǰ ���� :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. �ڷΰ���" << endl << endl;

		cout << "�� �� : "; cin >> select;
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

			cout << "�ùٸ� �Է��� �ƴմϴ�." << endl;
			system("pause");
		}
	}
}

void Delete_Product() {

	Handler H;

	while (1) {

		system("cls");

		int select;

		cout << " ������ǰ ���� :" << endl << endl;
		cout << " 1. Book" << endl;
		cout << " 2. Compact Disk" << endl;
		cout << " 3. Cellphone" << endl;
		cout << " 4. �ڷΰ���" << endl << endl;

		cout << "�� �� : "; cin >> select;
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

			cout << "�ùٸ� �Է��� �ƴմϴ�." << endl;
			system("pause");
		}
	}
}

int main() {

	MainMenu();

	return 0;
}

