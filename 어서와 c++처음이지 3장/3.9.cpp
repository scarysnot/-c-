#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int s[2] = { 0 };
	srand(unsigned(time(NULL)));
	for (int i = 0; i < 2; i++) {
		s[i] = rand() % 6 + 1;		
	}
	if (s[0] + s[1] == 7 || s[0] + s[1] == 11) {
	
		cout << "������� �ֻ���:" << s[0] << "+" << s[1] <<"="<< s[0] + s[1] << endl;
		cout << "����� ��";
	
	}
	else if (s[0] + s[1] == 2 || s[0] + s[1] == 3 || s[0] + s[1] == 12) {
	
		cout << "������� �ֻ���:" << s[0] << "+" << s[1] <<"=" << s[0] + s[1] << endl;
		cout << "����ڰ� �����ϴ�.";
	
	}
	else {
	
		cout << "������� �ֻ���:" << s[0] << "+" << s[1] <<"="<< s[0] + s[1] << endl;
		cout << "�����ϴ�.";
	
	}
		
		
		
	return 0;

}