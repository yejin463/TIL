#include<stdio.h>
int main(){
	
}

// ù��� ���� ��� 
~~~ (int value){
	temp->data=value;
	tail->link=temp;
	temp->link=tail->link;

}
// ������ ��� ���� ���
~~~ (int value){
	temp->data=value;
	temp->link=tail->link;
	tail->link=temp;
	tail=temp;

}
// �߰��� ��� ���� ��� == �ܼ� ���Ḯ��Ʈ�� ����

// �߰�, ù��� ���� ���
~~~ (NodePointer del, NodePointer tra){
	if(!head) return printf("List is Empty\n");
	else{
		NodePointer temp = del;
		if(tra) tra->link = del->link;
		else head = head->link;
		free(temp);
	}
} 

// ������ ��� ���� ��� 
~~~(){
	tra->link=del->link ;
	tail=tra;
	free(del);
}
	
