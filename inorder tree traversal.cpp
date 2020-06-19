#include<bits/stdc++.h>
using namespace std;
struct Node{
	int info;
	Node* left;
	Node* right;
};
void Inorder(Node* root){
	stack<Node*> s;
	Node* temp = root;
	s.push(NULL);
	while(!s.empty()){
		if(temp->left!=NULL){
			s.push(temp);
			temp = temp->left;
		}
		else if(temp->left==NULL){
			cout<<temp->info<<" ";
			temp = s.top();
			cout<<temp->info;
			s.pop();
			if(temp->right!=NULL){
				temp = temp->right;
			}
			else{
				temp = s.top();
				cout<<temp->info;
				s.pop();
			}
		}
	}
	return;
}
int main(){
	Node* root = new Node;
	root->info = 5;
	Node* n1 = new Node;
	n1->info = 6;
	Node* n2 = new Node;
	n2->info = 7;
	Node* n3 = new Node;
	n3->info = 8;
	Node* n4 = new Node;
	n4->info = 9;
	Node* n5 = new Node;
	n5->info = 11;
	Node* n6 = new Node;
	n6->info = 12;
	Node* n7 = new Node;
	n7->info = 10;
	Node* n8 = new Node;
	n8->info = 14;
	Node* n9 = new Node;
	n9->info = 13;
	root->left=n1;
	root->right = n2;
	n1->left = n3;
	n1->right = n4;
	n2->left = n5;
	n2->right = n6;
	n3->left=NULL;
	n3->right = NULL;
	n4->left = NULL;
	n4->right = n7;
	n5->left = NULL;
	n5->right = NULL;
	n6->left = n8;
	n6->right = n9;
	Inorder(root);
	
}
