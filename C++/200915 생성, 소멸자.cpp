#include <iostream>
using namespace std;
// 생성자: 객체를 생성할 때 자동으로 호출되는 함수
// 생성자 > 멤버 변수 초기화
//			매개변수 갯수와 타입에 따라 다중 정의 가능
// 소멸자: 객체를 소멸할 때 자동으로 호줄되는 함수
// 소멸자 > 클래스당 하나로 유일
// 클래스 이름 = 함수 이름
// 반환 형식 X, 소멸자 ~함수이름
class CTest {
	int m_nData;
public:
	CTest(): m_nData(0) {
		cout << " CTest 생성자" << m_nData << endl;
	}
	CTest(int nParam) : m_nData(nParam) {
		cout << " CTest " << m_nData << endl;
	}
	~CTest(){
		cout << " CTest 소멸자" << m_nData << endl;

	}
};
int main() {
	cout << " main 시작 " << endl;
	CTest data(10);
	cout << " main 끝 " << endl;
	return 0;
}