#include <iostream>
using namespace std;
double hypot(double, double);
int main() {
	double x, y, z;
	cout << "�����ﰢ���� �Ѻ�:";
	cin >> x;
	cout << "�����ﰢ���� �Ѻ�:";
	cin >> y;
	z = hypot(x, y);
	cout << "����:" << z;
}
double hypot(double a, double b) {
	
	return sqrt(a * a + b * b);
}