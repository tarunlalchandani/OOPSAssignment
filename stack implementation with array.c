#include<stdio.h>
int Top = 0;
int Max = 10;
void Push(int* arr, int x){
	if(Top==Max){
		printf("Stack Overflow\n");
	}
	else{
		*(arr+Top) = x;
		Top++;
	}
	return;
}
int Pop(int* arr, int x){
	int ans = -1;
	if(Top==0){
		printf("Stack Underflow\n");
	}
	else{
		Top--;
		ans = *(arr+Top);
	}
	return ans;
}
int Size(int* arr){
	return Top;
}
void display(int *arr){
	int t = Size(arr);
	int i;
	for(i=0;i<t;i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
	return;
}
int main(){
	int arr[10];
	int x;
	while(x!=-1){
		printf("Enter x for pushing and x = -1 for stopping the loop and x = 0 for pop operation");
		scanf("%d",&x);
		if(x==0){
			Pop(arr,x);
		}
		else if(x!=-1){
			Push(arr,x);
		}
		display(arr);
	}
}
