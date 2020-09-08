#include <iostream>
	//범위기반 for문
int main(){
	int nArr[5] = { 10,20,30,40,50 };
	for(int i = 0; i < 3; i++)
		std::cout << nArr[i] << " ";
	std::cout << std::endl;
}
