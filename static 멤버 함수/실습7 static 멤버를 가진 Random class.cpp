#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random{
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed(){ srand((unsigned int)time(NULL));}
	static int nextInt(int , int );	// min�� max ������ ���� ���� ���� 
	static char nextAlphabet();	// ���� ���ĺ� ���� ���� 
	static double nextDouble();	// 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ���� 
};

int Random::nextInt(int min=0, int max=32767){
	return rand()%max+min;
} 

char Random::nextAlphabet(){
	bool n=rand()%2;
	if (n){		// �빮�� 
		return (char)(rand()%26+65);
	}
	else {		// �ҹ��� 
		return (char)(rand()%26+97);
	}
}

double Random::nextDouble(){
	return rand()/(double)(RAND_MAX + 1); // 0���� 32767�� ������ 32768�� ������ �Ǽ��� ���´�. 
}

int main (){
	Random::seed();
	cout<<"1���� 100���� ������ ���� 10���� ����մϴ�."<<endl;
	for (int i=0;i<10;i++){
		cout<<Random::nextInt(1, 100)<<' ';
	} 
	cout<<endl;
	cout<<"���ĺ��� �����ϰ� 10�� ����մϴ�."<<endl;
	for (int i=0;i<10;i++){
		cout<<Random::nextAlphabet()<<' ';
	}
	cout<<endl;
	cout<<"������ �Ǽ��� 10�� ����մϴ�."<<endl;
	for(int i=0;i<5;i++){
		cout<<Random::nextDouble()<<' ';
	}
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<Random::nextDouble()<<' ';
	}
}
