#include <iostream>

// ������ ����
// ���� �������� �ʴ´�.

// ����& �̸�; (l-value)
// ����&& �̸�; (r-value) �����߿� �ִ� �ӽð�ü
void Test(int& a) { 
	// &�� ��� 23�ٸ� ��
	// &&�ϰ�� 23�ٸ� �� ��
}

int main() {
		
	int a(10);
	/*
	int b(20);
	int& pa(a); // l-value ����
	pa = b;
	std::cout << a << " " << pa << std::endl;
	
	int&& rD(10+10) // r-value ����
	*/
	Test(a);
	Test(1);
	Test(a + 1);
	Test(1 + 1);
	Test(a + a);
}