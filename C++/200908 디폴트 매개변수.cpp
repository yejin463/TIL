#include <iostream>

//�Ű������� ����Ʈ�� �ʱⰪ ����
// ��ȯ���� ȣ��Ծ� �Լ��̸�(�Ű����� > �ʱ�ȭ)

int Test(int a = 0) {
	return a * 10;
}
int main() {
	std::cout << Test(20) << std::endl;
}