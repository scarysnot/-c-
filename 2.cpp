#include <iostream>
using namespace std;
class Line {
private:
	int line;
	int* ptr;
public:
	Line(int line=0) {
		this->line = line;
		ptr = new int[line];
		cout << "�Ϲ� ������ ȣ��" << endl;
	}
	Line(Line& c) {
		line = c.line;
		ptr = new int[line];
		cout << "���� ������ ȣ��" << endl;
	
	}
	void print() {
	
		cout << line << endl;
	}
	~Line() {
		cout << "�Ҹ��� ȣ��" << endl;
		delete[]ptr;
	
	}



};
int main() {
	Line x(10);
	Line z=x;
	cout << "�Ϲ� ������" << endl;
	x.print();
	cout << "���� ������" << endl;
	z.print();




}