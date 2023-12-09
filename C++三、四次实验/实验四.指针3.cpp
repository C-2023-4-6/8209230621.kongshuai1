#include<iostream>
using namespace std;
void bubblesort(int a[], int len) {
	for (int i = 0;i < len-1;i++) {
		for (int j = i + 1;j < len;j++) {
			if (a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}
int main() {
	int b = 100;
	int* p = new int[b];
	int len=0;
	cin >> len;
	for (int i = 0;i < len;i++)
		cin >> *(p+i);
	bubblesort(p, len);
	
	for (int i = 0;i < len;i++)
		cout << *(p + i) << "  ";
	delete[]p;
	return 0;
}