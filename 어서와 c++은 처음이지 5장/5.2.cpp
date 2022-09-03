#include <iostream>
#include <string>
using namespace std;
class airplane {
private:
	string name;
	int capacity;
	int speed;
	int i;
public:
	airplane():name(""), capacity(0),speed(0),i(0) {
		
	}
	airplane(string name, int capacity, int speed,int i) {
		this->capacity = capacity;
		this->name = name;
		this->speed = speed;
		this->i = i;
	}
	void setname(string name);
	void setcapcity(int capcity);
	void setspeed(int speed);
	void seti(int i);
	string getname();
	int getcapacity();
	int getspeed();
	int geti();
	void print();
};
void airplane::setcapcity(int capacity) {
	this->capacity = capacity;

}
void airplane::setname(string name) {
	this->name = name;
}
void airplane::setspeed(int speed) {
	this->speed = speed;

}
void airplane::seti(int i) {
	this->i = i;

}
string airplane::getname() {
	return name;

}
int airplane::getcapacity() {
	return capacity;
}
int airplane::getspeed() {

	return speed;
}
int airplane::geti() {
	return i;
}
void airplane::print() {
	cout << "������� #"<< i << endl;
	cout << "������� �̸�:" << name<<endl;
	cout << "������� �뷮:" << capacity << endl;
	cout << "������� �ӵ�" << speed << "Km/h" << endl<<endl;
	
}
int main() {

	airplane obj1("���� 787",900,300,1 );
	airplane obj2("������� 350",400,1000,2);
	obj1.print();
	obj2.print();




}