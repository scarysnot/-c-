#include <iostream>
using namespace std;
int main() {
	int a;

	cout << "�ݶ�, ��, ��������Ʈ,�ֽ�, Ŀ�� �߿��� �ϳ��� �����ϼ���:";
	cin >> a;
	if (a==1) {
		cout << "�ݶ� ���� �Ͽ����ϴ�.";
	}
	else if (a == 2) {
		cout << "���� ���� �Ͽ����ϴ�.";
	}
	else if (a == 3) {
		cout << "��������Ʈ�� ���� �Ͽ����ϴ�.";
	}
	else if (a == 4) {
		cout << "�ֽ��� ���� �Ͽ����ϴ�.";
	}
	else {
		cout << "Ŀ�Ǹ� ���� �Ͽ����ϴ�.";
	
	}
	return 0;

}