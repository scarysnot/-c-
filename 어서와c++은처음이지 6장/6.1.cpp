#include <iostream>
#include <vector>
using namespace std;
int main() {

	int size;
	int y;
	int max;
	int min;
	cout << "������ ����:";
	cin >> size;
	vector<int> list(size);

	for (int i = 0; i < size; i++) {

		cout << "������ �Է��Ͻÿ�";
		cin >> y;
		list[i] = y;

	}
	max = list[0];
	min = list[0];
	for (int i = 0; i < size; i++) {
		if (max < list[i]) {
			max = list[i];

		}
		if (min > list[i]) {
			min = list[i];

		}

	}
	cout << "�ִ밪: " << max << endl;
	cout << "�ּҰ�: " << min << endl;
	
	return 0;



}