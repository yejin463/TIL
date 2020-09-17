#include <iostream>
using namespace std;

class CRefTest {
	int& m_nData;
public:
	CRefTest(int& rParam) : m_nData(rParam) {
		cout << m_nData << endl;
	}

	~CRefTest() {}
	int GetData() { return m_nData; }
};
int main() {
	int a(10);
	CRefTest t(a);
	a = 20;
	return 0;
}

class CTest {
	int m_nData; // = 0 초기화 가능
public:
	CTest() :m_nData(0) {
		// m_nData = 0;
	}
	CTest(int nParam) :m_nData(nParam) {
		// m_nData = nParam;
	}
	~CTest() {}
};