#include <iostream>
namespace AAA {
	int num; // AAA��� �Ҽ� �ȿ��� Ȱ��
}
using std::cout;
using std::endl;

int main() {
	AAA::num = 20; // AAA�� �Ҽӵ� num�� 20���� �ʱ�ȭ
	cout << AAA::num << endl;
}