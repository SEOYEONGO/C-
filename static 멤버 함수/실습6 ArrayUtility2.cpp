#include <iostream>
using namespace std;
#define SIZE 5

class ArrayUtility2{
public:
	// s1�� s2�� ������ ���ο� �迭�� ���� �����ϰ� ������ ���� 
	static int* concat(int s1[], int s2[], int size);
	
	// s1���� s2�� �ִ� ���ڸ� ��� ������ ���ο� �迭�� ���� �����Ͽ� ����. �����ϴ� �迭�� ũ���
	// retSize�� ����. retSize�� 0�� ��� NULL ����
	static int* remove (int s1[], int s2[], int size, int& retSize);

}; 

int* ArrayUtility2::concat(int s1[], int s2[], int size){
	int *p=new int[size*2];
	for (int i=0;i<size;i++){
		p[i]=s1[i];
	}
	for (int i=5, j=0; j<size;i++,j++){
		p[i]=s2[j];
	}
	return p;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize){
	int *sel=new int[size];
	int cnt=0;
	for (int i=0, j;i<size;i++){
		for (j=0;j<size;j++){
			if (s1[i]==s2[j]) break;
		}
		if (j==size) sel[cnt++]=s1[i];
	}
	retSize=cnt;
	return sel;
}

int main(){
	int x[SIZE], y[SIZE], *p;
	int retSize;
	cout<<"������ "<<SIZE<<" �� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	for (int i=0;i<SIZE;i++){
		cin>>x[i];
	}
	cout<<"������ "<<SIZE<<" �� �Է��϶�. �迭 x�� �����Ѵ� >> ";
	for (int i=0;i<SIZE;i++){
		cin>>y[i];
	}
	cout<<endl;
	
	p=ArrayUtility2::concat(x,y,SIZE);
	cout<<"��ģ ���� �迭�� ����Ѵ�"<<endl;
	for (int i=0;i<SIZE*2;i++){
		cout<<p[i]<<' ';
	}
	cout<<endl;
	
	p=ArrayUtility2::remove(x,y,SIZE, retSize);
	cout<<"�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ "<<retSize<<endl;
	for (int i=0;i<retSize;i++){
		cout<<p[i]<<' ';
	}
}
