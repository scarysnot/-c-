#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool iscompare(string a,string b) {
	return a < b;

}
int main() {
	int x;
	cout << "���ڿ��� ����";
	cin >> x;
	vector<string> v(x);

	for (auto& c : v) {
		cout << "���ڿ��� �Է��Ͻÿ�";
		cin >> c;	
	}
	
	sort(v.begin(), v.end(), iscompare);
	for (auto& c : v) {
	
		cout << c << endl;
	}
	return 0;
}