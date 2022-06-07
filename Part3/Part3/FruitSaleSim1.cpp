#include <iostream>
using namespace std;

class FruitSeller {

private:
	int APPLE_PRICE;
	int numofApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) {

		APPLE_PRICE = price;
		numofApples = num;
		myMoney = money;

	}

	int SaleApples(int money) {

		int num = money / APPLE_PRICE;
		numofApples -= num;
		myMoney += money;
		return num;

	}

	void ShowSalesResult() {

		cout << "���� ��� : " << numofApples << endl;
		cout << "�Ǹ� ���� : " << myMoney << endl << endl;

	}
};

class FruitBuyer {

	int myMoney;
	int numofApples;


public:

	void InitMembers(int money) {

		myMoney = money;
		numofApples = 0;
	}

	void BuyApples(FruitSeller& seller, int money) {

		numofApples += seller.SaleApples(money);
		myMoney -= money;

	}

	void ShowBuyResult() {

		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numofApples << endl << endl;

	}
};

int main() {

	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;

}