#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�?";
	cin >> n;

	string* x = new string[n];

	for (int i = 0; i < n; i++) {
		cout << "�̸� �Է�#" << i;
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		cout << x[i] << endl;
		
	}

	delete[]x;
	return 0;






}