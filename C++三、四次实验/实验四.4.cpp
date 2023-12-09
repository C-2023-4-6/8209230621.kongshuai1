#include <iostream>
using namespace std;
void merge( int list1[], int size1,  int list2[], int size2,  int list3[], int size3) {
	
	int m = (size1 > size2 ? size1 : size2);
	int n = size1 + size2 - m;
	for (int i = 0;i < m + n;i++) {
		if (size1 > size2) {
			if (i < n)list3[i] = list2[i];
			else list3[i] = list1[i - n];
		}
		else{
			if (i < n)list3[i] = list1[i];
			else list3[i] = list2[i - n];
		}
	}
	for (int i = 0;i < size3 - 1;i++) {
		for (int j = i+1;j < size3 ;j++) {
			int t = list3[j];
			if (list3[j] >= list3[j + 1]) {

				list3[j] = list3[j + 1];
				list3[j + 1] = t;
			}
		}
	}
	
	}
int main(){
	int size1=0, size2=0, size3=0;
	size3 = size1 + size2;
	
	int* p1 = new int[size1];
	int* p2 = new int[size2];
	int* p3 = new int[size3];
	cin >> size1;
	for (int i = 0;i < size1;i++)cin >> p1[i];
	cin >> size2;
	for (int i = 0;i < size2;i++)cin >> p2[i];
	merge(p1, size1, p2, size2, p3, size3);
	for (int i = 0;i < size1+size2;i++)cout << p3[i] << "  ";
	delete[]p1;
	delete[]p2;
	delete[]p3;
	
	return 0;
	

	
}

