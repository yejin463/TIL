#include <iostream>

// 참조형 변수
// 서로 끊어지지 않는다.

// 형식& 이름; (l-value)
// 형식&& 이름; (r-value) 연산중에 있는 임시객체
void Test(int& a) { 
	// &일 경우 23줄만 됨
	// &&일경우 23줄만 안 됨
}

int main() {
		
	int a(10);
	/*
	int b(20);
	int& pa(a); // l-value 참조
	pa = b;
	std::cout << a << " " << pa << std::endl;
	
	int&& rD(10+10) // r-value 참조
	*/
	Test(a);
	Test(1);
	Test(a + 1);
	Test(1 + 1);
	Test(a + a);
}