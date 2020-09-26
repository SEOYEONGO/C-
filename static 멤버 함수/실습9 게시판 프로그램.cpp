#include <iostream>
using namespace std;

class Board{
	static string s[100];
	static int pos;
public:
	static void add(string text);
	static void print();
};

string Board::s[100];
int Board::pos=0;

void Board::add(string text){
	s[pos++]=text;
}

void Board::print(){
	cout<<"********  �Խ��� �Դϴ�.  ********"<<endl;
	for (int i=0;i<pos;i++){
		cout<<i<<": "<<s[i]<<endl;
	}
	cout<<endl;
}

int main (){
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿����ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���.");
	Board::print();
}
