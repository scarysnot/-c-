//1-4
#include <iostream>
#include <string>
using namespace std;
int main() {
	int x;
	int y;
	int z;
	cout << "����: ";
	cin >> x;
	cout << "�ʺ�: ";
	cin >> y;
	cout << "����: ";
	cin >> z;
	cout << endl;
	cout << endl;
	cout <<"������ ����:" << x * y * z << endl;
	cout << "������ ǥ����" << 2 * ((x * y) + (x * z) + (y * z));


	return 0;
}