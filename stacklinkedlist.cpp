#include<bits/stdc++.h>
using namespace std;
int Top = 0;
int MaxSize = 10;
struct Node{
	int data;
	Node* next;
};
int Pop(Node* Head){
	int ans = -1;
	if(Top==0){
		cout<<"Stack Underflow"<<endl;
	}
	else if(Top==1){
		Head->data = 5;
		Top--;
	}
	else{

		struct Node* t = Head;

		int i=0;
		while(i<Top-2){
			t = t->next;
			i++;
		}
		Top--;
		ans = ((t->next)->data);
		t->next = NULL;
		return ans;
	}
}
void Push(Node* Head,int x){
	if(Top==0){
		Head->data = x;
		Top++;
	}
	else if(Top == MaxSize){
		cout<<"Stack Overflow"<<endl;
	}
	else{
		Node* t = Head;
		Node* temp = new Node;
		temp->data = x;
		temp->next = NULL;
		int i=0;
		while(i<Top-1){
			t = t->next;
			i++;
		}
		Top++;
		t->next = temp;
	}
	return;
}
void display(Node* Head){
	Node* t = Head;
	if(t->data==5){
		cout<<"Stack Underflow";
		return;
	}
	else{

		int i;
		for(i=0;i<Top;i++){
			cout<<t->data<<" ";
			t = t->next;
		}
		cout<<endl;
		return;
	}
}
int main(){
	Node* Head = new Node;
	Head->data = 5;
	int x;
	Head->next = NULL;
	Node* tr = Head;
	while(x!=-1){
		cout<<"-1 for stop, 0 for pop, else push";
		cin>>x;
		if(x==0){
			Pop(Head);
		}
		else if(x!=-1){
			Push(Head,x);
		}
		display(Head);
	}
	return 0;
}
