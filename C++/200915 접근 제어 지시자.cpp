#include <iostream>
using namespace std;
// 접근제어 지시자 범위: class
// public: 외부에서 멤버 모두 접근 허용
// protected: 외부에서 일단 차단 + 파생클래스 허용
// private: 외부에서 모두 차단

class CMyData
{
	int m_nData; //private
public:
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
};

int main() {
	CMyData data;
	data.SetData(10);
	cout << data.GetData() << endl;
	return 0;
}