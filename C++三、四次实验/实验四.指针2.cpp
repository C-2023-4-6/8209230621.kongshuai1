#include<iostream>
#include<cstring>
using namespace std;
int parseHex(const char* hexstring) {
	int s = 0;
	int m = strlen(hexstring);
	for (int i = 0;i < m;i++) {
		
		if (hexstring[m - 1 - i] <= '9'&&hexstring[m - 1 - i]>='0')s += (hexstring[m - 1 - i]-48) * pow(16, i);
		else if (hexstring[m - 1 - i] == 'A')s+= 10 * pow(16, i);
		else if (hexstring[m - 1 - i]== 'B')s+= 11 * pow(16, i);
		else if (hexstring[m - 1 - i]== 'C')s+= 12 * pow(16, i);
		else if (hexstring[m - 1 - i]== 'D')s+= 13 * pow(16, i);
		else if (hexstring[m - 1 - i]== 'E')s+= 14 * pow(16, i);
		else if (hexstring[m - 1 - i]== 'F')s+= 15* pow(16, i);
		
	}
	 
	return s;
}
int main() {
	const char* const hexstring = "A5";
	int a = parseHex(hexstring);
	cout << a;
	return 0;
}