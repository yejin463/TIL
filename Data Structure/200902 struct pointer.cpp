#include<stdio.h>
struct Node{
	char ch;
	int num;
};

int main(){
	// ����ü �����ͷ� �����ϱ� 
	struct Node str={'a', 1};
	struct Node * ptr = &str;
	printf("%c %d\n", str.ch, str.num);
	printf("%c %d", ptr->ch, ptr->num);
}
