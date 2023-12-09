#include <iostream>
#include<cstring>
using namespace std;
int indexOf( char s1[],  char s2[]) {
	for (int i = 0;i < strlen(s2);i++) {
		int k = 1;
		for (int j = 0;j < strlen(s1);j++) {
			if (s1[j] != s2[i+j]) {
				k = 0;break;
			}
			
		}
		if (k == 1) { return i ;  }
	}

	return -1;
}
int main() {
	int m=100,n=100;
	char* p = new char[m];
	char* p1 = new char[n];
	cin.getline(p, m);
	cin.getline(p1, n);
	int z = indexOf(p, p1);
	cout << z;
	delete[]p;
	delete[]p1;
	return 0;
}
