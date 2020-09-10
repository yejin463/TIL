#include<stdio.h>
#include<stdlib.h>
typedef struct NODE * NodePointer;
typedef struct NODE{
	int data;
	NodePointer link;
	}NODE;
NodePointer head = NULL;
void Insert(NodePointer pre, int value);
int Delete(NodePointer del, NodePointer tra);

int main(){
	Delete(head, head);
	Insert(head,1);
	Insert(head,2);
	Insert(head->link, 3); 
	printf("%d ",head->data);
	printf("%d ",head->link->data);
	printf("%d ",head->link->link->data);
	Delete(head, head->link);
	printf("%d ",head->data);
	printf("%d ",head->link->data);
	printf("%d ",head->link->link->data);
}

void Insert(NodePointer pre, int value){
		NodePointer temp = (NodePointer)malloc(sizeof(NODE));
		temp->data = value;
		if(!head){ //����Ʈ�� ������ ���� 
			temp->link = NULL;
			head = temp;
		}else{ //����Ʈ�� ������ �ƴ� ����  
			temp->link = pre->link;
			pre->link = temp;
		}
}

int Delete(NodePointer del, NodePointer tra){
	if(!head) return printf("List is Empty\n");
	else{
		NodePointer temp = del;
		if(tra) tra->link = del->link;
		else head = head->link;
		free(temp);
	}
} 
