#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() : m_nData(0) {
		cout << " CTest ������" << m_nData << endl;
	}
	CTest(int nParam) : m_nData(nParam) {
		cout << " CTest " << m_nData << endl;
	}
	~CTest() {
		cout << " CTest �Ҹ���" << m_nData << endl;

	}
};
int main() {
	cout << " main ���� " << endl;
	CTest data(10);
	CTest* pa = new CTest[5]{ 1,2,3 };
	delete[] pa;
	cout << " main �� " << endl;
	return 0;
}