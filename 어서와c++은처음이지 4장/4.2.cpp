#include <iostream>
#include <string>
using namespace std;
class computer {
private:	
	string name;
	int ram;
	double cpu_speed;
public:
	void setcomputer(string name,int ram,double cpu_speed) {
		this->name = name;
		this->ram = ram;
		this->cpu_speed = cpu_speed;	
	}
	void print() {
		cout << "�̸�:" << name<<endl;
		cout << "RAM:" << ram << endl;
		cout << "CPU �ӵ�:" << cpu_speed << endl;
	
	
	}

};
int main() {

	computer obj;
	obj.setcomputer("���ǽ� ��ǻ��", 8, 4.2);
	obj.print();
	return 0;




}