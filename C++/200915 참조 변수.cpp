#include <iostream>
using namespace std;

class CRefTest {
	int& m_nData;
public:
	CRefTest(int &rParam) : m_nData(rParam) {
		cout << " CTest 생성자" << m_nData << endl;
	}
	
	~CRefTest() {
		cout << " CTest 소멸자" << m_nData << endl;
	}
	int GetData() { return m_nData; }
};
int main() {
	cout << " main 시작 " << endl;
	int a(10);
	CRefTest t(a);
	cout << "GetData(): " << t.GetData() << endl;
	a = 20;
	cout << "GetData(): " << t.GetData() << endl;

	cout << " main 끝 " << endl;
	return 0;
}