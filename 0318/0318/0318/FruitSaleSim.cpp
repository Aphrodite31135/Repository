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
		cout << "남은 사과: " << NumOfApples << endl;
		cout << "판매 수익: " << MyMoney << endl;
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
		cout << "현재 잔액: " << MyMoney << endl;
		cout << "사과 개수: " << NumOfApples << endl;
	}
};

int main() {
	FruitSeller seller (1000, 20, 0);
	FruitBuyer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "판매자의 현황: " << endl;
	seller.ShowSalesResult();
	cout << "구매자의 현황: " << endl;
	buyer.ShowBuyResult();

	return 0;

}