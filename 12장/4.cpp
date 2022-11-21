#include <iostream>
using namespace std;
class GameCharactere {
public:
	
	virtual void draw() = NULL;


};
class Hobbit :public GameCharactere {
public:
	void draw() {
		cout << "ȣ���� ȭ�鿡 �׸��ϴ�." << endl;
	}

};
class Sorcerer :public GameCharactere {
public:
	void draw() {
		cout << "�ּ��縦 ȭ�鿡 �׸��ϴ�." << endl;
	}

};
int main() {
	GameCharactere * a[] = {new Hobbit,new Sorcerer,new Hobbit};
	a[0]->draw();
	a[1]->draw();
	a[2]->draw();
	delete[] *a;


}