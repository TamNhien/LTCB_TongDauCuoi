#include <iostream>
using namespace std;

int main() {
	int sodau, socuoi, Tong = 0;
	cout << "Nhap so dau : "; cin >> sodau;
	cout << "Nhap so cuoi : "; cin >> socuoi;
	
	
	cout << "Vong Lap While\n";
	while (sodau <= socuoi) {
		cout << sodau << " ";
		Tong = Tong + sodau;
		sodau++;
	}
	cout << "\nTong = " << Tong;


	cout << "\nVong Lap Do While\n";
	do {
		cout << sodau << " ";
		Tong = Tong + sodau;
		sodau++;
		cout << "\nTong = " << Tong;
	} while (sodau <= socuoi);
	return 0;
}