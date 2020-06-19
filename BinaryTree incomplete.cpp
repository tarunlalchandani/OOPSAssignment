#include<bits/stdc++.h>
using namespace std;
class Tnode{
	public:
		Tnode* left = NULL;
		Tnode* right = NULL;
		int data;
};
class BTree{
	private:
		Tnode* root = new Tnode;
	public:
		void appendNode(int x);
		//void deleteNode(int x);
		void printTree();
};
/*void BTree::deleteNode(int x){
	queue<Tnode*> q;
	if(root!=NULL){
		Tnode* d = new Tnode;
		Tnode* deep = new Tnode;
		q.push(root);
		Tnode* temp = q.front();
		q.pop();
		while(!q.empty()){
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			if(temp->data == x){
				d = temp;
			}
			temp = q.front();
			if(q.size()==1){
				deep = q.front();
			}
			q.pop();
		}
		if(q.empty()){
			cout<<"Element is not there";
		}
		else{
			Tnode* parent = new Tnode;
			d->data = deep->data;
			queue<Tnode*> jai;
			jai.push(root);
			Tnode* temp = jai.front();
			if(temp->left==deep or temp->right==deep){
				parent = temp;
			}
			jai.pop();
			while(true){
				if(temp->left!=NULL){
					jai.push(temp->left);
				}
				if(temp->right!=NULL){
					jai.push(temp->right);
				}
				if(temp->left==deep or temp->right==deep){
					parent = temp;
					break;
				}
				temp = jai.front();
				jai.pop();
			}
			if(deep==parent->left){
				parent->left==NULL;
			}
			else if(deep==parent->right){
				parent->right==NULL;
			}
		}

	}
	else{
		delete root;
	}
}*/
void BTree::appendNode(int x){
	queue<Tnode*> q;
	if(root->data!=0){
		q.push(root);
		Tnode* temp = q.front();
		q.pop();
		while(temp!=NULL){
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			else{
				Tnode* h = new Tnode;
				h->data = x;
				temp->left = h;
				break;
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			else{
				Tnode* h = new Tnode;
				h->data = x;
				temp->right = h;
				break;
			}
			temp = q.front();
			q.pop();
		}
	}
	else{
		root->data = x;
	}
	return;
}
void BTree::printTree(){
	queue<Tnode*> q;
	if(root!=NULL){
		q.push(root);

		Tnode* temp = q.front();
		q.pop();
		cout<<temp->data<<" ";
		while(temp!=NULL){
			if(temp->left!=NULL){
				q.push(temp->left);
			}
			if(temp->right!=NULL){
				q.push(temp->right);
			}
			else{
				temp = temp->left;
			}
			if(!q.empty()){
				temp = q.front();
				q.pop();
				cout<<" "<<temp->data<<" ";
			}
		
		}
	}
	else{
		cout<<"Enter values first";
		
	}
	return;
}
int main(){
	BTree t;
	t.appendNode(5);
	t.appendNode(7);
	t.appendNode(8);
	t.appendNode(0);
	t.appendNode(10);
	t.appendNode(12);
	t.printTree();
	return 1;
}
