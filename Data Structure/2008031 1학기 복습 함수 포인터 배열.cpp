#include<stdio.h>

void func(int *ptr);

int main(){
	int list[10]={0, };
	func(list);
	for(int i=0; i<10; i++) printf("%d\n", list[i]);
}

void func(int *ptr){ // list의 주소를 받음 
	for(int i=0; i<10; i++) ptr[i]=i;
}
