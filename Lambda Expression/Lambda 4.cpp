#include <iostream>
#include <vector>
#include <algorithm>	// for_each() �˰��� �Լ��� ����ϱ� ����
using namespace std;


int main (){
	vector<int> v = {1,2,3,4,5};
	
	// for_each()�� ���� v�� ù��° ���� (v.begin())���� ��(v.end())���� �˻��ϸ鼭,
	// �� ���ҿ� ���� 3��° �Ű������� print(int n) ȣ��. �Ű����� n�� �� ���� �� ����
	for_each(v.begin(), v.end(), [](int n) {cout<<n<<" ";}); 
}
