#include <iostream>
#pragma warning (disable:4996)
using namespace std;

class NameCard {
private :
	char* name;
	char* comp_name;
	char* p_num;
	int grade;

public :
	enum COMP_POS
	{ CLERK=1, SENIOR=2, ASSIST=3, MANAGER=4 };

	NameCard(const char* myname, const char* mycomp_name, const char* myp_num, COMP_POS mygrade) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);

		len = strlen(mycomp_name) + 1;
		comp_name = new char[len];
		strcpy(comp_name, mycomp_name);

		len = strlen(myp_num) + 1;
		p_num = new char[len];
		strcpy(p_num, myp_num);

		grade = mygrade;
	}

	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << comp_name << endl;
		cout << "전화번호: " << p_num << endl;
		Grade_Selector(); // 직급 출력 함수
		cout << endl;
	}

	void Grade_Selector() {
		switch (grade)
		{
		case 1:
			cout << "직급: 사원" << endl;
			break;
		case 2:
			cout << "직급: 주임" << endl;
			break;
		case 3:
			cout << "직급: 대리" << endl;
			break;
		case 4:
			cout << "직급: 과장" << endl;
			break;
		default :
			cout << "직급: 미정" << endl;
		}
	}

	~NameCard() {
		delete[]name;
		delete[]comp_name;
		delete[]p_num;

		name = nullptr;			// 포인터가 NULL 또는
		comp_name = nullptr;	// nullptr을가리키게
		p_num = nullptr;		// 함으로써 위변조 방지
	}
};

int main() {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", NameCard::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", NameCard::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", NameCard::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}