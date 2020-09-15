#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() : m_nData(0) {
		cout << " CTest 생성자" << m_nData << endl;
	}
	CTest(int nParam) : m_nData(nParam) {
		cout << " CTest " << m_nData << endl;
	}
	~CTest() {
		cout << " CTest 소멸자" << m_nData << endl;

	}
};
int main() {
	cout << " main 시작 " << endl;
	CTest data(10);
	CTest* pa = new CTest[5]{ 1,2,3 };
	delete[] pa;
	cout << " main 끝 " << endl;
	return 0;
}