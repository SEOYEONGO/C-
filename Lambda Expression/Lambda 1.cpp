#include <iostream>
#include <string>
using namespace std;

int main(){
//	[](int x, int y) { cout<<"���� "<<x+y; } (2,3); // ���ٽ� ���� 
	auto love=[](string a, string b){
		cout<<a<<"���� "<<b<<"�� ����"<<endl;
	};
	
	love("��", "��");
	love("�ø�","����");
} 


