//1.7
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
	double x;
	cout << "������:";
	cin >> x;

	cout << "ǥ����:" << 4 * M_PI * x * x << endl;
	
	cout << "����:"<< 4/3 *M_PI * x * x*x;
	

	return 0;
}