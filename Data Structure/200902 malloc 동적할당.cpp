#include<stdio.h>
#include<stdlib.h>
typedef struct Node * NodePointer; // struct Node * == NodePointer
 typedef struct Node{
	int data;
	NodePointer link; // == struct Node * link 
}Node; // ���� ����ÿ� Node�� �� �� �ְ� �Ѵ�. 

NodePointer func();

int main(){
	NodePointer ptr= func();
	printf("%d", ptr->data);
}

NodePointer func(){
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
	temp->data=1;
	temp->link=NULL;
	return temp;
}
