#include <iostream>
#include <string>
using namespace std;
int main() {
	string s[5];
	string x=" ";
	for (int i = 0; i < 5; i++) {
		cout << "���ڿ��� �Է��Ͻÿ�:";
		cin >> s[i];
		if (s[i].size() > x.size()) {
			x = s[i];	
		}				
		}												
	cout << "���� �� ���ڿ���" <<x;
	return 0;		
}