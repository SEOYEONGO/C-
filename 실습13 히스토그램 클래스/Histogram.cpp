#include <iostream>
#include <string>
#include <cstring>
#include "Histogram.h"

using namespace std;

void Histogram::put(string s){
	str.append(s);
}

void Histogram::putc(char c){
	string a="";
	a=c;
	str.append(a);
}

void Histogram::print(){		// 97-122
	cout<<str<<endl;
	len=str.length();
	for (int i=0;i<len;i++){			// �빮�ڶ�� �ҹ��ڷ� �� �ٲ�. 
		if (isupper(str[i])) str[i]=tolower(str[i]);
	}
	// cout<<str<<endl;
		
	int cnt[122]={0};
	int countAlpha=0;
	for (int i=0;i<len;i++){
		if (isalpha(str[i])){		// ���ĺ��̸�...cnt[�ƽ�Ű�ڵ�] ���� ���� ����. 
			cnt[(int)str[i]]++;
			countAlpha++;			// ��ü ���ĺ� ������ ������. 
		}
	}
	
	cout<<endl<<"�� ���ĺ� �� "<<countAlpha<<endl<<endl;
	
	for (int i=97;i<123;i++){
		cout<<(char)i<<" ("<<cnt[i]<<") \t : ";
		for(int j=0;j<cnt[i];j++){
			cout<<'*';
		}
		cout<<endl;
	}

}
