#include <iostream>
#include <string>
using namespace std;
class box {
private:
	int length;
	int width;
	int height;
	int number;
	bool empty;
public:
	
	box() :length(0),width(0),height(0),number(1) {}
	box(int len, int wid, int heig,int n) {
		length = len;
		width = wid;
		height = heig;
		number = n;	
	}
	void setem(bool empty) {
		this->empty = empty;
	
	}
	void setlength(int length) {
		this->length= length;
	
	}
	void setwidth(int width) {
		this->width = width;
	}
	void setheight(int height) {
		this-> height = height;
	}
	void setnumber(int  number) {
		this->number= number;
	}
	int getlength() {
		return length;
	}
	int getwidth() {
	
		return width;
	}
	int getheight() {
		return height;
	}
	int getnumber() {
		return number;
	}
	bool getempty() {
		return empty;
	
	}
	void printempty() {
		if (empty == true) {
			
			cout << "��� �ִ�." << endl;
		}
		else {
			
			cout << "��� ���� �ʴ�."<<endl;
		}
			
	}
	int getvolume() {
		return height* width*length;
	
	}
	void print() {
		cout << "����#" << number << endl;
		cout << "������ ����" << length<<endl;
		cout << "������ �ʺ�" << width << endl;
		cout << "������ ����" << height << endl;
		cout << "������ ����" << getvolume() << endl;

	
	}

	


};
int main() {
	box x1;
	x1.print();
	box x2(3,2,4,2);
	x2.print();


}