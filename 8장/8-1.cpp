#include <iostream>
using namespace std;
int main() {

	int x;
	int n;
	cout << "��� ������ �Է��ұ��?";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "������ �Է��Ͻÿ�";
		cin >> a[i];
	
	}
	for (int i = 0; i < n;i++) {
		cout << a[i]<<" ";
	
	}
	delete[]a;
	return 0;










}