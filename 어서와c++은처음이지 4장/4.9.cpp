#include <iostream>
using namespace std;
class triangle {
private:
	int b;
	int h;
public:
	void print();
	double area();
	void settri(int b, int h);
};
void triangle::settri(int b, int h){
	this->b = b;
	this->h = h;

}
double triangle::area() {	
	return b * h * 0.5;
	
}
void triangle::print() {
	cout << "�غ��� " << b << "�̰�" << "���̰�" << h << "�� �ﰢ���� ����:"<<area();

}

int main() {
	triangle x;
	x.settri(3,5);
	x.print();
	return 0;
	
}
