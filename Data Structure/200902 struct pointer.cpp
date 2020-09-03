#include<stdio.h>
struct Node{
	char ch;
	int num;
};

int main(){
	// 구조체 포인터로 지정하기 
	struct Node str={'a', 1};
	struct Node * ptr = &str;
	printf("%c %d\n", str.ch, str.num);
	printf("%c %d", ptr->ch, ptr->num);
}
