#include <iostream>
using namespace std;
int maximum(int x, int y, int z) {
	if (x > y) {
		if (x > z)
			return x;
		else {
			return z;
		}
	}
	else {
		if (y > z) {
			return y;
		}
		else {
			return z;
		}
	}
}
int main() {
	int num1, num2, num3;
	cout << "3���� ������ �Է��Ͻÿ�:";
	cin >> num1 >> num2 >> num3;
	cout << maximum(num1, num2, num3) << "�Դϴ�.";
	return 0;
}