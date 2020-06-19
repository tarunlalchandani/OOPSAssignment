#include<bits/stdc++.h>
using namespace std;
class Base{
	private:
		string Rollnum;
	public :
		void getdata();
		void display();
};
void Base::getdata(){
	cout<<"Enter the roll number"<<endl;
	cin>>Rollnum;
	return;
}
void Base::display(){
	cout<<"The roll number of the student is: "<<Rollnum<<endl;
	return;
}
class Derived: public Base{
	private:
		string name;
	public:
		void getdata();
		void display();
};
void Derived::getdata(){
	cout<<"Enter name: "<<endl;
	cin>>name;
	Base::getdata();
}
void Derived::display(){
	cout<<"Name: "<<name<<endl;
	Base::display();
}
int main(){
	Derived obj;
	obj.getdata();
	obj.display();
}
