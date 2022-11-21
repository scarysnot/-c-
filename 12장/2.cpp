#include <iostream>
using namespace std;
class Weapon {
private:
public:
	virtual void load() = 0;
};
class Gun :public Weapon {
public:
	void load() {
		cout << "���� �����մϴ�." << endl;
	}
};
class Bomb :public Weapon {
public:
	void load() {
		cout << "��ź�� �����մϴ�." << endl;
	}

};

int main() {
	Weapon* myweapon[] = {new Gun,new Bomb,new Bomb};
	for (Weapon* x : myweapon) {
		x->load();
	}
}