#include <iostream>
using namespace std;
class person
{
private:
	string name;
	int age;
public:
	void setperson(string name, int age) {
		this->name = name;
		this->age = age;
		
	}
	void print() {
	
		cout << "�̸�:" << name << endl;
		cout << "����:" << age << endl;

	}



};
int main() {

	person x;
	x.setperson("��ö��", 21);
	x.print();

	return 0;

}