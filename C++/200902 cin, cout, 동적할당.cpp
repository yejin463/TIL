#include <iostream>
#include <string>
/*
int main()
{
	int strAge;
	std::string strJob, strName;
	std::cout << "���̸� �Է��ϼ��� :";
	std::cin >> strAge;
	std::cout << "������ �Է��ϼ��� :";
	std::cin >> strJob;
	std::cout << "�̸��� �Է��ϼ��� :";
	std::cin >> strName;
	
	std::cout	<< "\n����� �̸���"<<strName
				<<"�̰�, ���̴� "<<strAge
				<<"�̸�, ������ "<<strJob
				<<"�Դϴ�."<<std::endl;
}

new �޸� ���� �Ҵ� ������
delete �޸� ���� ������
*/

int main()
{
	//��ü�� �迭 ���·� ���� �����Ѵ�.
	int* arr = new int[5];

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;

	//�迭 ���·� ������ ����� �ݵ�� �迭 ���¸� ���� �����Ѵ�.
	delete[] arr;

	return 0;
}