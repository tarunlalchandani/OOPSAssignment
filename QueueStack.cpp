//Queue using Stacks
#include<bits/stdc++.h>
using namespace std;
int Stack1[10];
int Stack2[10];
int maxsize = 50;
int Qfront = 0;
int Qrear = 0;
int Stack1Top = 0;
int Stack1Max = 10;
int Stack2Top = 0;
int Stack2Max = 10;
void Stack1Push(int* arr, int x){
	if(Stack1Top==Stack1Max){
		printf("Stack Overflow\n");
	}
	else{
		*(arr+Stack1Top) = x;
		Stack1Top++;
	}
	return;
}
void Stack2Push(int* arr, int x){
	if(Stack2Top==Stack2Max){
		printf("Stack Overflow\n");
	}
	else{
		*(arr+Stack2Top) = x;
		Stack2Top++;
	}
	return;
}
int Stack1Pop(int* arr, int x){
	int ans = -1;
	if(Stack1Top==0){
		printf("Stack Underflow\n");
	}
	else{
		Stack1Top--;
		ans = *(arr+Stack1Top);
	}
	return ans;
}
int Stack2Pop(int* arr, int x){
	int ans = -1;
	if(Stack2Top==0){
		printf("Stack Underflow\n");
	}
	else{
		Stack2Top--;
		ans = *(arr+Stack2Top);
	}
	return ans;
}
int Stack1Size(int* arr){
	return Stack1Top;
}
int Stack2Size(int* arr){
	return Stack1Top;
}
void Qpush(int* arr,int x){
	if(Qrear == maxsize){
		cout<<"Stack Overflow";
	}
	else{
		Stack1Push(Stack1,x);
		Qrear++;
		return;
	}
}
int Qpop(int* arr){
	int ans = -1;
	if(Qfront==Qrear){
		cout<<"Queue Underflow";
	}
	else{
		int s = Stack1Size(Stack1);
		for(int i=0;i<s;i++){
			int x = Stack1Pop();
			Stack2Push(Stack2,x);
		}
		ans = Stack2Pop(Stack2);
		for(int i=0;i<s-1;i++){
			int x = Stack2Pop();
			Stack1Push(Stack1,x);
		}
		Qfront++;
	}
	return ans;
}
void Display(){
	int i = Stack1Top;
	if(i==0){
		cout<<"StackUnderFlow"<<endl;
	}
	for(int i=0;i<Stack1Top;i++){
		cout<<Stack1[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int Queue[10],x;
	while(x!=-1){
		cout<<"0 for popping, -1 for loop stop and else push";
		cin>>x;
		if(x==0){
			Qpop(Queue);
		}
		else if(x!=-1){
			Qpush(Queue,x);
		}
		Display();
	}
	return 0;
}
