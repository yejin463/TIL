#include<stdio.h>
void add(int *ptr, int index, int value);
void del(int *ptr, int index);

int main(){
	int addNum, addIndex, delIndex;
	scanf("%d %d %d", &addNum, &addIndex, &delIndex);
	int arr[10]={0,1,2,4,5,6,7,8,9};
	add(arr, addIndex, addNum);
	for(int i=0; i<10; i++) printf("%d ", arr[i]);
	printf("\n");
	del(arr,delIndex);
	for(int i=0; i<10; i++) printf("%d ", arr[i]);
	printf("\n");
} 

void add(int *ptr, int index, int value){
	for(int i=9; i>index; i--) ptr[i] = ptr[i-1];
	ptr[index] = value;
}

void del(int *ptr, int index){
	for(int i=index; i<10; i++) ptr[i]= ptr[i+1];
	ptr[9] = 0;
}
