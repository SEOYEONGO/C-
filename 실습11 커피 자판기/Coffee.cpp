#include <iostream>
#include "Coffee.h"
using namespace std;

void CoffeeVendingMachine::run(){
	cout<<"*****  Ŀ�� ���Ǳ⸦ �۵��մϴ�.   *****"<<endl;
	while(1){
		cout<<"�޴��� �����ּ��� (1: ����������, 2: �Ƹ޸�ī��, 3: ����Ŀ��, 4: �ܷ� ����, 5: ä���)\n>> ";
		int op;
		cin>>op;
		
		switch(op){
		case 1:
			selectEspresso();
			show();
			break;
		
		case 2:
			selectAmericano();
			show();
			break;
			
		case 3:
			selectSugarCoffee();
			show();
			break;
			
		case 4:
			show();
			break;
		
		case 5:
			fill();
			break;
			
		default:
			cout<<"�������� �ʴ� ����Դϴ�."<<endl;
			break;
		}
		cout<<endl;
	}
	
}
