#include<stdio.h>
int main(){
	
}

// 첫노드 삽입 경우 
~~~ (int value){
	temp->data=value;
	tail->link=temp;
	temp->link=tail->link;

}
// 마지막 노드 삽입 경우
~~~ (int value){
	temp->data=value;
	temp->link=tail->link;
	tail->link=temp;
	tail=temp;

}
// 중간에 노드 삽입 경우 == 단순 연결리스트와 동일

// 중간, 첫노드 삭제 경우
~~~ (NodePointer del, NodePointer tra){
	if(!head) return printf("List is Empty\n");
	else{
		NodePointer temp = del;
		if(tra) tra->link = del->link;
		else head = head->link;
		free(temp);
	}
} 

// 마지막 노드 삭제 경우 
~~~(){
	tra->link=del->link ;
	tail=tra;
	free(del);
}
	
