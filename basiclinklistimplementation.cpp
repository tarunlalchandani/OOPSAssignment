//implementing gcd program
#include<iostream>
using namespace std;
struct Node{
		private:
			int data;
			Node *p;
		public:
				int getdata(){
					return data;
				}
				void setdata(int d){
					data = d;
				}
				Node* getNext(){
					return p;
				}
				void setNext(Node *q){
					p = q;
				}
				Node(){
					data = 0;
					p = NULL;
				}
				Node(int d,Node *n){
					data = d;
					p = n;
				}
		};
void traversal(Node *head){
		Node* t = new Node();
		t = head;
		while(t->getNext() != NULL){
			cout<<t->getdata()<<" ";
		}
		cout<<t->getdata()<<" ";
	}
		
int main(){
	

	
	Node *head = new Node();
	int n;
	cout<<"Enter how many no.s to store in linked list";
	cin>>n;
	Node *t = new Node();
	t = head;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		Node *p = new Node(temp,NULL);
		
		t->setNext(p);
		p = t;


	}
	//traversal
	traversal(head);

}

