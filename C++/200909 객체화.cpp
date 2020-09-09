#include <iostream>
using namespace std;
// 객체화
/*
class 클래스 이름// 클래스는 첫 문자를 대문자로
{
접근 제어 지시자: (public, protected, private)
};
생성자 : 함수 > 멤버 변수를 초기화
		클래스 이름과 동일한 이름
		반환 형식 없음.
*/
class USERDATA {
public:
	// 초기화 가능
	//USERDATA() {
	//	nAge = 17;
	//	strcpy(szName, "김예진");
	//}
	int nAge;
	char szName[10];
	void Print();
};

void USERDATA::Print() {
	cout << nAge << " " << szName << endl;
}
int main() {
	USERDATA user = {17, "김예진" }; // 객체 선언 > 인스턴스 생성 > 생성자 호출
	user.Print();
	return 0;
}