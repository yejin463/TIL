/*
//스택
 후입선출(Last In First Out)
 top이라고 하는 한쪽 끝에서 데이터의 삽입과 삭제가 일어남
 배열 스택, 연결리스트 스택이 있음. 
 
 // 배열 스택
 배열로 구현된 스택
 top변수가 최상위 원소를 가리킴 
 */
#include<stdio.h>
int push(int *stack, int value);
int pop(int *stack);
int isEmpty();
int isFull();
int top=-1;

int main(){
	int stack[10]= {0};
	pop(stack);
	for(int i=0; i<11; i++) push(stack, i);
	for(int i=0; i<10; i++) printf("%d\n", stack[i]);
	printf("top: %d\n", top);
	pop(stack);
	for(int i=0; i<10; i++) printf("%d\n", stack[i]);
	printf("top %d", top);
}

int push(int *stack, int value){
	if(isFull()) return printf("Stack is Full\n");
	else stack[++top] = value;
}

int isFull(){
	if(top>=9) return 1;
	else return 0;
}

int pop(int *stack){
	if(isEmpty()) return printf("Stack is Empty!\n");
	else int temp=stack[top--];
}

int isEmpty(){
	if(top<=0) return 1;
		else return 0; 
}
