#include <iostream>

//매개변수를 디폴트로 초기값 지정
// 반환형식 호출규약 함수이름(매개변수 > 초기화)

int Test(int a = 0) {
	return a * 10;
}
int main() {
	std::cout << Test(20) << std::endl;
}