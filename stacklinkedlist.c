#include<stdio.h>
int Top = 0;
struct Node{
	int data;
	Node* next;
};
int Pop(Node* Head){
	struct Node* t = Head;
	int ans;
	int i;
	while(i<Top-1){
		t = t->next;
	}
	Top--;
	ans = ((t->next)->data);
	t->next = NULL;
	return ans;
}
void Push(Node* Head){
	struct Node* temp =
}
int main(){
	
}
