/*
//����
 ���Լ���(Last In First Out)
 top�̶�� �ϴ� ���� ������ �������� ���԰� ������ �Ͼ
 �迭 ����, ���Ḯ��Ʈ ������ ����. 
 
 // �迭 ����
 �迭�� ������ ����
 top������ �ֻ��� ���Ҹ� ����Ŵ 
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
