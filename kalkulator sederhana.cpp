#include <iostream>

using namespace std;
int main() {
	float a, b, hasil;
	char aritmatika;
	cout << "=====selamat datang di kalkulator sederhana=====" << endl;
	cout << "masukan nilai pertama";
	cin >> a;
	cout << "masukan operator +,-,/,*";
	cin >> aritmatika;
		cout << "masukan nilai kedua";
	cin >> b;
	if (aritmatika == '+') {
		hasil = a + b;
	}
	else	if (aritmatika == '-') {
		hasil = a - b;
	}

	else	if (aritmatika == '*') {
		hasil = a * b;

	}
	else	if (aritmatika == '/') {
		hasil = a / b;
	}
	else{
		cout << "operator salah";
	}
	cout << "hasil perhitungan" << endl;
	cout << a << aritmatika << b << "=" << hasil<<endl;

		return 0;
}