#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	bool z = is_valid(a, b, c);
	if (z == 1) {
		double x = _area(a, b, c);
		cout << "�����ε�����ǣ�" << x << endl;
	}
	else cout << "����" << endl;
	return 0;
}