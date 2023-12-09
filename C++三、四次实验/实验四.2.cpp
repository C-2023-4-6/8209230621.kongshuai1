#include<iostream>
using namespace std;
void bubblesort(double arr[], int len) {
	
	for (int i = 0;i < len - 1;i++) {
		for (int j = 0;j < len - 1 - i;j++) {
			if (arr[j] > arr[j + 1]) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
	int main(){
		double arr[10];
		for (int i = 0;i < 10;i++)cin >> arr[i];
		int len = sizeof(arr) / sizeof(arr[0]);
		bubblesort(arr, len);
		for (int i = 0;i < 10;i++)cout << arr[i] << endl;
		return 0;
	}
		
