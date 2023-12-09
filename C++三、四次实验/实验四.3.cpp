#include<iostream>
using namespace std;
bool arr[100] = { 1};
int main() {
	for (int i = 1;i < 100;i++) {
		for (int j = 0;2 * (i + 1) + (i + 2) * j < 100;j++) {
			if (arr[2 * (i + 1) + (i + 2) * j] == 1) {arr[ 2 * (i + 1) + (i + 2) * j] = 0; }
			if(i>1){
				if (arr[2 * (i + 1) + (i + 2) * j] == 1) { arr[2 * (i + 1) + (i + 2) * j] = 0; }
				else  arr[2 * (i + 1) + (i + 2) * j] = 1;
			}
		}
	}
	for (int i = 0;i < 100;i++) {
		if (arr[i] == 1)cout << i << "  ";
	}
	return 0;
}