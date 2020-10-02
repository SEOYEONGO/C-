#include <iostream>
#include <string>
using namespace std;

class Circle{
	int radius;
public:
	Circle (int radius=0) {this->radius=radius;}
	int getRadius(){return radius;}
	void setRadius(int radius) { this->radius=radius;}
	double getArea(){return 3.14*radius*radius;}
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle() :Circle() { name="";}
	NamedCircle(int r, string name) : Circle(r){ this->name=name; }
	void setName(string name){ this->name=name; }
	string getName() { return name;}
	void show(){ cout<<"�������� "<<getRadius()<<"�� "<<name;}
};

int main (){
	NamedCircle pizza[5];
	string name;
	int radius, maxR;

	cout<<"5���� ���� �������� ���� �̸��� �Է��ϼ���"<<endl;
	for (int i=0;i<5;i++){
		cout<<i+1<<">> ";
		cin>>radius;
		getline(cin, name);
		pizza[i].setRadius(radius);
		pizza[i].setName(name);

	}
	maxR=pizza[0].getArea();
	for (int i=1;i<5;i++){
		if (maxR<pizza[i].getArea()){
			maxR=pizza[i].getArea();
			name=pizza[i].getName();
		}
	}
	cout<<"���� ������ ū ���ڴ� "<<name<<"�Դϴ�."<<endl;
}
