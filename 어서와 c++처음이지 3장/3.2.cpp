#include <iostream>
using namespace std;
inline double circle(double x) {
	
	return  4.0 / 3.0 * 3.14 * x * x * x;


}
int main() {
	double r;
	double y;
	cout << "�������� �Է��Ͻÿ�";
	cin >> r;

	y=circle(r);
	cout << "���� �������� " << y;

	return 0;


}
