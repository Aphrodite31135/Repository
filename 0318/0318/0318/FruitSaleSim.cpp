#include <iostream>
using namespace std;

class FruitSeller {
private :
	int Apple_Price;
	int NumOfApples;
	int MyMoney;

public :
	FruitSeller(int price, int num, int money) {
		Apple_Price = price;
		NumOfApples = num;
		MyMoney = money;
	}
	int SaleApples(int money) {
		int num = money / Apple_Price;
		NumOfApples -= num;
		MyMoney += money;
		return num;
	}
	void ShowSalesResult() const {
		cout << "���� ���: " << NumOfApples << endl;
		cout << "�Ǹ� ����: " << MyMoney << endl;
	}
};

class FruitBuyer {
private :
	const int MyInt = 24;
	int& MyRef;
	int MyMoney;
	int NumOfApples;

public :
	FruitBuyer(int money)
		: MyRef(money)
		, MyMoney(money)
		, NumOfApples(0)
		, MyInt(0)
	{
		// Mymoney = money;
		// NumOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) {
		NumOfApples += seller.SaleApples(money);
		MyMoney -= money;
	}
	void ShowBuyResult() const {
		cout << "���� �ܾ�: " << MyMoney << endl;
		cout << "��� ����: " << NumOfApples << endl;
	}
};

int main() {
	FruitSeller seller (1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "�Ǹ����� ��Ȳ: " << endl;
	seller.ShowSalesResult();
	cout << "�������� ��Ȳ: " << endl;
	buyer.ShowBuyResult();

	return 0;

}