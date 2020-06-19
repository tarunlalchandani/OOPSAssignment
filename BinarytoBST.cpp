#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node* left;
	Node* right;
	int value;
};
class Tree{
	public :
		Node* root;
		int height;
		int Nodecount;
		Tree(){
			root = new Node;
			root->value = -2;
			root->left = NULL;
			root->right = NULL;
			height = 0;
			Nodecount = 0;
		}
		void InsertElement(int);
		void Display();
};
void Tree::Display(){
	queue<Node*> q;
	if(root->value == -2){
		cout<<"Tree is empty"<<endl;
	}
	else{
		q.push(root);
		Node* temp = q.front();
		while(!q.empty()){
			temp = q.front();
			cout<<temp->value<<" ";
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			else if(temp->right!=NULL){
				q.push(temp->right);
			}
			q.pop();
		}
	}
}
void Tree::InsertElement(int z){
 queue<Node*> q;
	if(root->value==-2){
		root->value = z;
		Nodecount++;
	}
	else{
		q.push(root);
		while(!q.empty()){
			Node* temp = q.front();
			if(temp->left==NULL){
				Node* New = new Node;
				New->value = z;
				New->right = NULL;
				New->left = NULL;
				temp->left = New;
				Nodecount++;
				break;
			}
			else if(temp->right==NULL){
				Node* New = new Node;
				New->value = z;
				New->right = NULL;
				New->left = NULL;
				temp->right = New;
    				Nodecount++;
				break;
			}
			else{
				q.push(temp->left);
				q.push(temp->right);
				q.pop();
			}
		}
	}
	return;
}
int main(){
	Tree t1;
	cout<<"Enter element and enter -1 to end loop";
	int z;
	cin>>z;
	while(z!=-1){
		
  		t1.InsertElement(z);
  		cin>>z;
	}
	t1.Display();
	return 0;
}
