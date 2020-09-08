#include<iostream>
//함수 다중적용
// 매개변수나 자료형이 달라야 다중 적용을 할 수 있다.
/*
int Add(int a, int b) {
	return a + b;
}
int Add(int a, int b, int c) {
	return a + b + c;
}
double Add(double a, double b) {
	return a + b;
}
int main() {
	std::cout << Add(3, 4) << std::endl;
}

// 함수 템플릿
template <typename T>
T Add(T a, T b) {
	return a + b;
}

int main() {
	std::cout << Add(3, 4) << std::endl;
}
*/
// 인라인 함수
// 인라인 함수는 매크로처럼 사용이 가능하다.
// 매크로와 함수의 장점만 모아놓았다. (함수 자료형)
inline int Add(int a, int b) {
	return a + b;
}

int main() {
	std::cout << Add(3, 4) << std::endl;
}