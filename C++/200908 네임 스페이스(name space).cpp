#include <iostream>
namespace AAA {
	int num; // AAA라는 소속 안에서 활용
}
using std::cout;
using std::endl;

int main() {
	AAA::num = 20; // AAA에 소속된 num을 20으로 초기화
	cout << AAA::num << endl;
}