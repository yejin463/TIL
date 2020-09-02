#include <iostream>
#include <string>
/*
int main()
{
	int strAge;
	std::string strJob, strName;
	std::cout << "나이를 입력하세요 :";
	std::cin >> strAge;
	std::cout << "직업를 입력하세요 :";
	std::cin >> strJob;
	std::cout << "이름를 입력하세요 :";
	std::cin >> strName;
	
	std::cout	<< "\n당신의 이름은"<<strName
				<<"이고, 나이는 "<<strAge
				<<"이며, 직업은 "<<strJob
				<<"입니다."<<std::endl;
}

new 메모리 동적 할당 연산자
delete 메모리 해제 연산자
*/

int main()
{
	//객체를 배열 형태로 동적 생성한다.
	int* arr = new int[5];

	for (int i = 0; i < 5; i++)
		arr[i] = (i + 1) * 10;

	for (int i = 0; i < 5; i++)
		std::cout << arr[i] << std::endl;

	//배열 형태로 생성한 대상은 반드시 배열 형태를 통해 삭제한다.
	delete[] arr;

	return 0;
}