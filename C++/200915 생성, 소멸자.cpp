#include <iostream>
using namespace std;
// ������: ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// ������ > ��� ���� �ʱ�ȭ
//			�Ű����� ������ Ÿ�Կ� ���� ���� ���� ����
// �Ҹ���: ��ü�� �Ҹ��� �� �ڵ����� ȣ�ٵǴ� �Լ�
// �Ҹ��� > Ŭ������ �ϳ��� ����
// Ŭ���� �̸� = �Լ� �̸�
// ��ȯ ���� X, �Ҹ��� ~�Լ��̸�
class CTest {
	int m_nData;
public:
	CTest(): m_nData(0) {
		cout << " CTest ������" << m_nData << endl;
	}
	CTest(int nParam) : m_nData(nParam) {
		cout << " CTest " << m_nData << endl;
	}
	~CTest(){
		cout << " CTest �Ҹ���" << m_nData << endl;

	}
};
int main() {
	cout << " main ���� " << endl;
	CTest data(10);
	cout << " main �� " << endl;
	return 0;
}