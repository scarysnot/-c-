//1.7
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
	double x;
	cout << "반지름:";
	cin >> x;

	cout << "표면적:" << 4 * M_PI * x * x << endl;
	
	cout << "부피:"<< 4/3 *M_PI * x * x*x;
	

	return 0;
}