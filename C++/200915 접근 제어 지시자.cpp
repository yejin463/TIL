#include <iostream>
using namespace std;
// �������� ������ ����: class
// public: �ܺο��� ��� ��� ���� ���
// protected: �ܺο��� �ϴ� ���� + �Ļ�Ŭ���� ���
// private: �ܺο��� ��� ����

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