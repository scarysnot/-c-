#include <iostream>
using namespace std;
class sum {
private:
	int n1;
	int n2;
public:
	void init();
	int add();
};
void sum::init() {
	cout << "ù ��° ����:";
	cin >> n1;
	cout << "�� ��° ����:";
	cin >> n2;
	

}
int sum::add() {
	return n1 + n2;

}
int main() {

	sum obj;
	obj.init();
	cout<<"���� ���:"<<obj.add();
	
	return 0;

}