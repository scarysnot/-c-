#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class contact {
private:
	string name;
	string tel;
public:
	contact() :name(""),tel("") {}
	contact(string name, string tel) {
		this->name = name;
		this->tel = tel;
	
	}
	string getname() {
		return name;
	}
	string gettel() {
		return tel;
	}
	
};
int main() {
	vector<contact>x(3);
	string name;
	string tel;
	string sname;

	for (auto& c : x) {
		cout << "�̸��� �Է��Ͻÿ�";
		cin >> name;
		cout << "��ȣ�� �Է��Ͻÿ�:";
		cin >> tel;
		c = contact(name, tel);
	}
	cout << "Ž���ϰ� ���� �̸�";
	cin >> sname;

	for (auto& c : x) {
		if (c.getname() == sname) {
			cout << "��ȭ��ȣ:" << c.gettel();
		}


	}
	



}