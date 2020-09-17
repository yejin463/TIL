#include <iostream>
using namespace std;

class CTest {
	int m_x, m_y;
public:
	CTest() = default; // ����� ����
	CTest(int x) {
		if (x > 10) x = 10;
		m_x = x;
		cout << m_x << endl;
	}
	CTest(int x, int y) :CTest(x) {
		if (y > 10) y = 10;
		m_y = y;
		cout << m_y << endl;
	}
	~CTest() {}
	// void print() { cout << m_x + m_y << endl; }
};

int main() {
	int a(10);
	int b(5);
	// CTest t; // ��ü�� ���� > �ν��Ͻ� > ������ ȣ��
	CTest t1(a);
	cout << endl;
	CTest t2(a, b);
	return 0;
}