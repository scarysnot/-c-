#include <iostream>
#include <string>
#include <atlstr.h>
using namespace std;
int main() {
	string s;
	cout << "���ڿ��� �Է��Ͻÿ�:";
	getline(cin, s);
	int z = s.length();
	if ('a' <= s[0] <= 'z'&&s[z-1]=='.') {
		s[0] = s[0] - 32;
		cout << s;
	
	
	}
	else if ('a' <= s[0] <= 'z' && s[z - 1] != '.') {
		s[0] = s[0] - 32;
		s = s.insert(z, ".");
		cout << s;

	}
	else if (s[z - 1] != '.') {
	
		s = s.insert(z, ".");
		cout << s;
	}
	return 0;

}