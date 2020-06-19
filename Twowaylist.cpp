#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node* forw;
	Node* back;
	int info;
};
struct LinkList{
	Node* head;
};
void Generate(LinkList l);
void Append(LinkList l,int z);
void Search(LinkList l,int item);
void Display(LinkList l);
void Delete(LinkList l, int item);
int main(){
	LinkList l;
	Generate(l);
	int z;
	cout<<"Enter elements to insert in the list";
	cin>>z;
	while(z!=-1){
		Append(l,z);
		cin>>z;
	}
	Display(l);
	cout<<"Enter an element e to search it";
	cin>>z;
	Search(l,z);
	cout<<"Enter a element e to delete from the list";
	cin>>z;
	Delete(l,z);
	Display(l);
	return 0;
}
void Generate(LinkList l,int z){
	l.head->forw = l.head;
	l.head->back = l.head;
}
void Append(LinkList l,int item){
	Node* ptr = l.head->forw;
	if(ptr!=l.head){
		ptr = ptr->forw;
	}
	Node* New = new Node;
	New->info = item;
	ptr->forw = New;
	New->forw = l.head;
	New->back = ptr;
	l.head->back = New;
}
void Search(LinkList l,int item,bool &success,Node* ){
	Node* ptr = l.head->forw;
	while(ptr!=l.head and ptr->info!=item){
		ptr = ptr->forw;
	}
	if(ptr->info == item){
		success = true;
	}
	else{
		success = false;
	}
}
