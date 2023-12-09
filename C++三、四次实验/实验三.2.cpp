#include<iostream>
using namespace std;
bool is_prime(int num) {
	int i = 2;int z = 1;
	for (;i < num;) {
		if (num % i == 0) { z = 0;break; }
		else i++;
	}
	return z;
}
int main() {
	int a;
	cin >> a;
	int z = is_prime(a);
	if (z == 1)cout << "true" << endl;
	else cout << "false" << endl;
	int x=0;
	int* p = new int[x];
	for (int i = 2;i < 200;i++) {
		if (is_prime(i) == 1)p[x++] = i;
	}
	for (int j = 0;j < x;j++) {
		cout << p[j] << "  ";
		if ((j + 1) % 10 == 0)cout << endl;
	}
	delete [] p;
	return 0;
}