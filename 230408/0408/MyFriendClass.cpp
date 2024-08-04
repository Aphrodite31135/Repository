#include <iostream>
#include <cstring>
#pragma warning (disable:4996)
using namespace std;

class Girl;	// Girl이라는 이름의 클래스가 존재함을 알림

class Boy {
private :
	int height;
	friend class Girl;	// Girl 클래스에게 private의 내용을 공개함을 선언
public :
	Boy(int len) : height(len) { }
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private :
	char phNum[20];
public :
	Girl(const char* num) {
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;	// Boy 클래스에게 private의 내용을 공개함을 선언
};

void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) {
	cout << "His height: " << frn.height << endl;
}

int main() {
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);
	return 0;
}