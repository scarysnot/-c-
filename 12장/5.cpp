#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Animal {
private:
	string name;
public:
	Animal(string name = "") {
		this->name = name;
	}

	virtual void speak() = 0;

};
class Dog :public Animal {
private:
	
public:
	Dog(string name = ""):Animal(name) {
	}
	void speak() {
		cout << "�۸�" << endl;
	}


};
class Cat :public Animal {
public:
	Cat(string name = "") : Animal(name) {}
	void speak() {
		cout << "�߿�" << endl;
	}

};
int main() {
	vector<Animal*> x = {new Dog("������1"),new Cat("�����1"),new Cat("�����2")};
	
	x[0]->speak();
	x[1]->speak();
	x[2]->speak();
	for (auto& elem : x) {
		delete elem;
	}


}