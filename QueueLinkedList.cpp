#include<bits/stdc++.h>
using namespace std;
int Front=0;
int Size=0;
int max_size = 10;
struct Node{
	int data;
	Node* next;
};
void Push(Node* Head,int x){
	if(Size==max_size){
		cout<<"Queue Overflow"<<endl;
	}
	else if(Head->data==-1){
		Head->data = x;
		Size++;
	}
	else if(Front == max_size){
		cout<<"Queue Overflow";
	}
	else{
		Node* temp = new Node;
		temp->data = x;
		temp->next = NULL;
		Node* t = Head;
		int i;
		for(int i=0;i<Size-Front-1;i++){
			t = t->next;
		}
		t->next = temp;
		Size++;
	}
}
int Pop(Node* Head){
	int ans = -1;
	if(Front==Size and Head->data!=-1){
		Head->data = -1;
	}
	else if(Front==Size){
		cout<<"Queue UnderFlow";
	}
	else{
		Node* temp = Head;
		ans = Head->data;
		Head = Head->next;
		Front++;
	}
	return ans;
}
void Display(Node* Head){
	if(Front==Size){
		cout<<" "<<endl;
	}
	else if(Front==Size-1 and Head->data!=-1){
		cout<<Head->data<<endl;
	}
	else{
		Node* t = Head;
		for(int i=0;i<Size-Front;i++){
			cout<<t->data<<" ";
			t = t->next;
		}
		cout<<endl;
	}
	return;
}
int main(){
	Node* Head = new Node;
	int x;
	Head->data = -1;
	Head->next = NULL;
	while(x!=-1){
		cout<<"0 for pop, -1 for stopping the loop else for pushing";
		cin>>x;
		if(x==0){
			Pop(Head);
		}
		else if(x!=-1){
			Push(Head,x);
		}
		Display(Head);
	}
	
}
