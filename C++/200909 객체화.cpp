#include <iostream>
using namespace std;
// ��üȭ
/*
class Ŭ���� �̸�// Ŭ������ ù ���ڸ� �빮�ڷ�
{
���� ���� ������: (public, protected, private)
};
������ : �Լ� > ��� ������ �ʱ�ȭ
		Ŭ���� �̸��� ������ �̸�
		��ȯ ���� ����.
*/
class USERDATA {
public:
	// �ʱ�ȭ ����
	//USERDATA() {
	//	nAge = 17;
	//	strcpy(szName, "�迹��");
	//}
	int nAge;
	char szName[10];
	void Print();
};

void USERDATA::Print() {
	cout << nAge << " " << szName << endl;
}
int main() {
	USERDATA user = {17, "�迹��" }; // ��ü ���� > �ν��Ͻ� ���� > ������ ȣ��
	user.Print();
	return 0;
}