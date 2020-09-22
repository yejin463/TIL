#include<stdio.h>
#include<stdlib.h>

typedef struct Node * NodePointer;
typedef struct Node {
	int data;
	NodePointer link;
}Node;
NodePointer top = NULL;
int isEmpty();
void push(int value);
int pop();
void print();

int main(){
	pop();
	push(10);
	printf("%d\n", top->data);
	push(20);
	printf("%d\n", top->data);
	push(30);
	printf("%d\n", top->data);
	
	printf("%d\n", pop());
	print();
}

void push(int value){ 
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
	temp->data=value;
	temp->link=top;
	top=temp;
}

int pop(){
	if(isEmpty()) return printf("Stack is Empty!\n");
	else{
		int item;
		NodePointer temp = top;
		item = temp->data;
		top=top->link;
		free(temp);
		return item;
	}
}

int isEmpty(){
	if(!top) return 1;
	else return 0;
} 

void print(){
	for(NodePointer ptr = top; ptr!=NULL; ptr=ptr->link) printf("%d ",ptr->data);
	printf("\n");
}
