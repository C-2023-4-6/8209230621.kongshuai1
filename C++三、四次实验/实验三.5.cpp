#include<iostream>
using namespace std;
int monkey(int x) {
	if (x== 10)return 1;
	else return   2 * monkey(x + 1) + 2;
}
int main() {
	int x = 1;
	cout << monkey(1) << endl;
	return 0;
}
