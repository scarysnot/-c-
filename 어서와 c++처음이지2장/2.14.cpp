#include <iostream>
using namespace std;
int main() {
	char s;
	int x,y;

	cout << "������ ����:";
	cin >> s;
	cout << "���ڸ� �Է��Ͻÿ�:";
	cin >> x >> y;
	if (s == '+' ) {
		cout <<"����� ���: " << x + y;
	
	}
	if (s == '*') {
		cout << "����� ���: " << x * y;

	}
	if (s == '/' ) {
		if(x>y)
			cout << "����� ���: " << x / y;
		else
			cout << "����� ���: " << y / x;
	}
	return 0;



}