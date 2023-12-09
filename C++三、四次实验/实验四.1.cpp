#include<iostream>
using namespace std;
int main() {
	int a[10];
	for (int i = 0;i < 10;i++) {
		cin >> a[i];
	}
	int b =1;
	int* p = new int[b];
	for (int i = 0;i < 10;i++) {
		int m = a[i],n = 0;
		for (int j = i + 1;j < 10;j++) {
			if (m == a[j])break;
			else n++;
		}
		if (n == 9 - i) p[b-1] = m,b++;
		else continue;
	}
	for (int i = 0;i < b-1;i++)cout << p[i] << endl;
	delete[] p;
	return 0;
}