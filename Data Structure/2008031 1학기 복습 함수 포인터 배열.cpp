#include<stdio.h>

void func(int *ptr);

int main(){
	int list[10]={0, };
	func(list);
	for(int i=0; i<10; i++) printf("%d\n", list[i]);
}

void func(int *ptr){ // list�� �ּҸ� ���� 
	for(int i=0; i<10; i++) ptr[i]=i;
}
