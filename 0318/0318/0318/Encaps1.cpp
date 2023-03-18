#include <iostream>
using namespace std;

class SinivelCap {	// Äà¹° Ã³Ä¡¿ë Ä¸½¶
public :
	void Take() const { cout << "Äà¹°ÀÌ ½Ï~ ³³´Ï´Ù." << endl; }
};

class SneezeCap {	// ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
public :
	void Take() const { cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù." << endl; }
};

class SnuffleCap {	//ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
public :
	void Take() const { cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù." << endl; }
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