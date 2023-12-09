#include<iostream>
#include<cstring>
using namespace std;
int indexof(  char* s1,  char* s2) {
	for (int i = 0;i < strlen(s2);i++) {
		int k = 1;
		for (int j = 0;j < strlen(s1);j++) {
			if (s1[j] != s2[i + j]) {
				k = 0;break;
			}
			
		}if (k == 1)return i;
		
	} return -1;
}
int main() {
	int m = 100, n = 100;
	 char* s1 =new char[m]  ;
	 char* s2=new char[n];
	
	cin.getline(s1, m);
	cin.getline(s2, n);
	int z=indexof(s1, s2);
	cout << z;
	delete[]s1;
	delete[]s2;
	return 0;
}