#include <iostream>
#include <string>
using namespace std;
class book {

public:
	string title;
	string author;
};
int main() {
	book obj;
	obj.title = "Great C++";
	obj.author = "Bob";
	cout << "å �̸�:" << obj.title<<endl		;
	cout << "å ����:" << obj.author<<endl;
	return 0;
}