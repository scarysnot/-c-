#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int x;
	int z;
	srand((unsigned)time(NULL));
	x = rand() % 3 + 1;
	cout << "����. ����, �� �߿� �ϳ��� �����Ͻÿ�:"<<"("<<1<<","<< 2<<"," <<3<<")";
	cin >> z;
	if (z == 1&&x==1) {
		cout << x<<endl;
		cout << "�����ϴ�.";
	
	}
	if (z == 1 && x == 2) {
		cout << x << endl;
		cout << "��ǻ�� ��!.";
	}
	if (z == 1 && x == 3) {
		cout << x << endl;
		cout << "�ΰ� ��!.";
	}
	if (z == 2 && x == 1) {
		cout << x << endl;
		cout << "�ΰ� ��!.";

	}
	if (z == 2 && x == 2) {
		cout << x << endl;
		cout << "�����ϴ�.";

	}
	if (z == 2 && x == 3) {
		cout << x << endl;
		cout << "��ǻ�� ��!.";

	}
	if (z == 3 && x == 3) {
		cout << x << endl;
		cout << "�����ϴ�.";

	}
	if (z == 3 && x == 1) {
		cout << x << endl;
		cout << "��ǻ�� ��!.";

	}
	if (z == 3 && x == 2) {
		cout << x << endl;
		cout << "�ΰ� ��!.";

	}
	return 0;
}