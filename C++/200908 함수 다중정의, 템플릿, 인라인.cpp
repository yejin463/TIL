#include<iostream>
//�Լ� ��������
// �Ű������� �ڷ����� �޶�� ���� ������ �� �� �ִ�.
/*
int Add(int a, int b) {
	return a + b;
}
int Add(int a, int b, int c) {
	return a + b + c;
}
double Add(double a, double b) {
	return a + b;
}
int main() {
	std::cout << Add(3, 4) << std::endl;
}

// �Լ� ���ø�
template <typename T>
T Add(T a, T b) {
	return a + b;
}

int main() {
	std::cout << Add(3, 4) << std::endl;
}
*/
// �ζ��� �Լ�
// �ζ��� �Լ��� ��ũ��ó�� ����� �����ϴ�.
// ��ũ�ο� �Լ��� ������ ��Ƴ��Ҵ�. (�Լ� �ڷ���)
inline int Add(int a, int b) {
	return a + b;
}

int main() {
	std::cout << Add(3, 4) << std::endl;
}