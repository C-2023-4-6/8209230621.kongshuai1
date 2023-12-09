#include<iostream>
using namespace std;
#include<cstring>
void count(const char s[], int counts[]) {
	for (int i = 0;i < strlen(s);i++) {
		
		switch (s[i]) {
		case 'A':case 'a':counts[0]++;break;
		case 'b':case 'B':counts[1]++;break;
		case 'c':case 'C':counts[2]++;break;
		case 'd':case 'D':counts[3]++;break;
		case 'e':case 'E':counts[4]++;break;
		case 'f':case 'F':counts[5]++;break;
		case 'g':case 'G':counts[6]++;break;
		case 'h':case 'H':counts[7]++;break;
		case 'i':case 'I':counts[8]++;break;
		case 'j':case 'J':counts[9]++;break;
		case 'k':case 'K':counts[10]++;break;
		case 'l':case 'L':counts[11]++;break;
		case 'm':case 'M':counts[12]++;break;
		case 'n':case 'N':counts[13]++;break;
		case 'o':case 'O':counts[14]++;break;
		case 'p':case 'P':counts[15]++;break;
		case 'q':case 'Q':counts[16]++;break;
		case 'r':case 'R':counts[17]++;break;
		case 's':case 'S':counts[18]++;break;
		case 't':case 'T':counts[19]++;break;
		case 'u':case 'U':counts[20]++;break;
		case 'v':case 'V':counts[21]++;break;
		case 'w':case 'W':counts[22]++;break;
		case 'x':case 'X':counts[23]++;break;
		case 'y':case 'Y':counts[24]++;break;
		case 'z':case 'Z':counts[25]++;break;
		}
	}
}
int main() {
	int m = 50;
	int counts[26] = { 0 };
	char* p = new char[m];
	cout << "enter a string:  ";
	cin.getline(p, m);
	count(p, counts);
	struct an {
		char a;
		int time;
	};
	an count[26];
	for (int i = 0;i < 26;i++) {
		count[i].a = 97+i;
		count[i].time = counts[i];
	}
	for (int i = 0;i < 26;i++) {
		if (counts[i] != 0)cout << count[i].a << ": " << count[i].time << "times"<<endl;
	}
	return 0;
}