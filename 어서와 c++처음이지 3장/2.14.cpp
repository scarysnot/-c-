#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main() {
	srand(unsigned(time(NULL)));
	string s = "apple";
	string ns="";
	string is;
	string q = "apple";
	int i;
	int x;
	int z;
	i = rand() % 4;
	x = rand() % 4;
	ns[0] = s[i];
	s[i] = s[x];
	s[x] = ns[0];
	while (1) {
		cout << s << "�� � �ܾ ��ũ����� ���ϱ��?";
		cin>> is;
		if (q == is) {
			cout << "�����մϴ�.";
			break;
		}
	
	
	}
	return 0;




}