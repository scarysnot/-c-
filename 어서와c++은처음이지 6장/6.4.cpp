#include <iostream>
#include <vector>
#include <string>
using namespace std;
class sms {
private:
	string sender;
	string receiver;
	string text;
public:
	sms() :sender(""),receiver(""),text("") {}
	sms(string sender, string receiver, string text) {
		this->sender = sender;
		this->receiver = receiver;
		this->text = text;
	}
	void print() {
		cout << "�߽���:" << sender << "������:" << receiver << "����" << text << endl;
	}
};
int main() {
	sms array[3] = { sms("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"),
		sms("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."),
		sms("010-1234-5678", "010-1234-5679", "������ �ϼ���.") };
	
	for (auto& c : array) {
		c.print();
	}
	cout << endl;

	vector<sms>v;
	v.push_back(sms("010-1234-5678", "010-1234-5679", "C++���δ� �ߵǰ�����?"));
	v.push_back(sms("010-1234-5679", "010-1234-5678", "�� 5������� ���� ���׿�."));
	v.push_back(sms("010-1234-5678", "010-1234-5679", "������ �ϼ���."));

	for (auto& c : v) {
		c.print();
	}
	return 0;
}