#include<iostream>
using namespace std;
int num(int a, int b) {
	int m = 0, n = 0, q = 0;
	m = a > b ? a : b;
	n = a + b - m;
	for (int i = 1;i<=n;i++) {
		if (m % i == 0 && n % i == 0)q = i;
	}
	return q;
}
int num2(int a,int b){
	int m = 0, n = 0, q = 0;
	m = a > b ? a : b;
	n = a + b - m;
	for (int i = m;i<=m*n;i++) {
		if (i % m == 0 && i % n == 0)q = i;
	}
	return q;
}
int main() {
	int a, b;
	cin >> a >> b;
	int z = num(a, b);
	int x = num2(a, b);
	cout << "a��b�����Լ���ǣ�" << z << endl;
	cout <<"a��b����С�������ǣ�" <<x<< endl;
	return 0;
}