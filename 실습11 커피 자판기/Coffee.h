#ifndef COFFEE_H
#define COFFEE_H
#include <iostream>
using namespace std;

class Container{	// ���ϳ��� ��Ÿ���� Ŭ����
	int size;		// ���� ���� ��, �ִ� ���差�� 10
public:
	Container() { size=10;}
	void fill() { size=10;} 	// �ִ뷮(10)���� ä���
	void consume() { size--;}   // 1��ŭ �Ҹ��ϱ� 
	int getSize() { return size; } // ���� ũ�� ���� 
};

class CoffeeVendingMachine{
	
	Container tong[3];		// tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	
	void fill(){			// 3���� ���� ��� 10���� ä�� 
		tong[0].fill(); 		tong[1].fill();		tong[2].fill();
	}
	
	void selectEspresso(){	// ���������Ҹ� ������ ���, Ŀ��1, ��1 �Ҹ�
		if (tong[1].getSize()<=0 || tong[0].getSize()<=0){
			cout<<"�˼������� ���ᰡ �� �������׿�~ "<<"���Ḧ ä���ּ���!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();
			cout<<"���������� ���Խ��ϴ�~ ���ְ� �弼�� *^^*"<<endl;
		}
	}
	
	void selectAmericano(){	// �Ƹ޸�ī�븦 ������ ���, Ŀ��1, ��2 �Ҹ�
		if (tong[1].getSize()<=0 || tong[0].getSize()<=1){
			cout<<"�˼������� ���ᰡ �� �������׿�~ "<<"���Ḧ ä���ּ���!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();		tong[1].consume();
			cout<<"�Ƹ޸�ī�� ���Խ��ϴ�~ ���ְ� �弼�� *^^*"<<endl;
		}
	}
	
	void selectSugarCoffee(){ // ����Ŀ�Ǹ� ������ ���, Ŀ��1, ��2 �Ҹ�, ���� 1 �Ҹ� 
		if (tong[1].getSize()<=0 || tong[0].getSize()<=1 || tong[2].getSize()<=0){
			cout<<"�˼������� ���ᰡ �� �������׿�~ "<<"���Ḧ ä���ּ���!"<<endl;
		}
		else {
			tong[0].consume();		tong[1].consume();		tong[1].consume();		tong[2].consume();
			cout<<"SugarCoffee ���Խ��ϴ�~ ���ְ� �弼�� *^^*"<<endl;
		}	
	}
	
	void show(){		 	// ���� Ŀ��, ��, ������ �ܷ� ���
		cout<<"Ŀ�� "<<tong[0].getSize()<<", "<<"�� "<<tong[1].getSize() <<", "<<"���� "<<tong[2].getSize()<<endl;
	}
public:
	void run();		// Ŀ�� ���Ǳ� �۵� 
}; 

#endif
