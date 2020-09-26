#include <iostream>
using namespace std;

class Trace{
    static string tag[100];
    static string debug[100];
    static int size;
public: 
	static void put(string t, string d);
	static void print(string t);
};

string Trace:: tag[100];
string Trace:: debug[100];
int Trace:: size=0;

void Trace::put(string t, string d){
	tag[size]=t;
	debug[size]=d;
	size++;
}

void Trace::print(string t=" "){
	if (t==" "){
		cout<<"----- ��� Trace ������ ����մϴ�. -----"<<endl;
		for (int i=0;i<size;i++){
			cout<<tag[i]<<" : "<<debug[i]<<endl;
		}
	}
	else {
		cout<<"----- "<<t<<" �±��� Trace ������ ����մϴ�. -----"<<endl;
		for (int i=0;i<size;i++){
			if (tag[i]==t){
				cout<<tag[i]<<" : "<<debug[i]<<endl;
			}
		}
	}
}
void f(){
	int a,b,c;
	cout<<"�� ���� ������ �Է��ϼ���>> ";
	cin>>a>>b;
	Trace::put("f()", "������ �Է� �޾���");	// ����� ���� ���� 
	c=a+b;
	Trace::put("f()", "�� ���");			// ����� ���� ���� 
	cout<<"���� "<<c<<endl;
}

int main (){
	Trace::put("main()", "���α׷� �����մϴ�.");	// ����� ���� ���� 
	f();
	Trace::put("main()", "����");		// put()�� ù ��° �Ű� ������ �±��̰�, �ι�° �Ű������� ����� �����̴�.
	Trace::print("f()");	// "f()" �±׸� ���� ����� ������ ��� ����Ѵ�.
	Trace::print();			// ��� ����� ������ ����Ѵ�. 
}
