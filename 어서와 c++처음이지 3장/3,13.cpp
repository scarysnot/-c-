#include <iostream>
#include <string>
using namespace std;
int main() {
	int z = 0;//�빮��
	int n = 0;//����
	int x = 0;//�ҹ���
	string s;

	cout << "��ȣ�� �Է��Ͻÿ�:";
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		if (islower(s[i])) {
			x++;
		}
		if (isupper(s[i])) {
			z++;
		}
		if (48 <= s[i] <= 57) {
			n++;
		}
	}
	if ((z > 0) && (x > 0) && (n > 0)) {
		cout << "�����մϴ�.";


	}
	else {
		cout << "�������� �ʽ��ϴ�.";
	}



	return 0;



}