#include <iostream>
using namespace std;

class CRefTest {
	int& m_nData;
public:
	CRefTest(int &rParam) : m_nData(rParam) {
		cout << " CTest ������" << m_nData << endl;
	}
	
	~CRefTest() {
		cout << " CTest �Ҹ���" << m_nData << endl;
	}
	int GetData() { return m_nData; }
};
int main() {
	cout << " main ���� " << endl;
	int a(10);
	CRefTest t(a);
	cout << "GetData(): " << t.GetData() << endl;
	a = 20;
	cout << "GetData(): " << t.GetData() << endl;

	cout << " main �� " << endl;
	return 0;
}