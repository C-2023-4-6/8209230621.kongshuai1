#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	bool z = is_valid(a, b, c);
	if (z == 1) {
		double x = _area(a, b, c);
		cout << "三角形的面积是：" << x << endl;
	}
	else cout << "错误" << endl;
	return 0;
}