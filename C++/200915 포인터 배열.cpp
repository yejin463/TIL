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
	CTest* pa[5];
	/*for (int i = 0; i < 5; i++)
		pa[i] = new CTest(10);*/
	for (auto& n : pa)
		n = new	CTest(10);
	for (auto& n : pa)
		delete	n;
	cout << " main 끝 " << endl;
	return 0;
}