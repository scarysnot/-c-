#include <iostream>
#include <string>
using namespace std;
int main() {
	int x;
	int i = 0;
	while (1) {
		cout << "������ �Է��Ͻÿ�:";
		cin >> x;
		if (x == 5) {
		
			cout << "5�� �Է��Ͽ�����! ��ǻ�� ��";
			break;
		}
		if (i == 4) {
			cout << "�γ����� ���մϴ�. ����� ��";
			break;
		}
		i++;	
	}
	return 0;
}