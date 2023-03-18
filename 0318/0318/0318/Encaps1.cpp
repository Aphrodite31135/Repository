#include <iostream>
using namespace std;

class SinivelCap {	// �๰ óġ�� ĸ��
public :
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap {	// ��ä�� óġ�� ĸ��
public :
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap {	//�ڸ��� óġ�� ĸ��
public :
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class coldPatient {
public :
	void TakeSinivlCap(const SinivelCap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnufflecap(const SnuffleCap& cap) const { cap.Take(); }
};

int main() {
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	coldPatient sufferer;

	sufferer.TakeSinivlCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnufflecap(ncap);
}