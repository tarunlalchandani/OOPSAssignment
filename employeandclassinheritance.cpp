#include<iostream>
#include<string>
using namespace std;
class person{
	int age;
	string name;
	char gen;
	public:
		void getData();
		void display();
};
void person::getData(){
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter age :";
	cin>>age;
	cout<<"Enter gender :";
	cin>>gen;
}
void person::display(){
	cout<<"Name: "<<name<<endl;
	cout<<"age : "<<age<<endl;
	cout<<"Gender:"<<gen<<endl;
}
class student: private person{
	string ins;
	int level;
	public:
		void getInfo();
		void putInfo();
};
void student::getInfo(){
	getData();
	cout<<"Institute name: ";
	cin>>ins;
	cout<<"Enter Level: ";
	cin>>level;
}
void student::putInfo(){
	display();
	cout<<"Institute: "<<ins;
	cout<<"\nLevel: "<<level<<endl;
}
class emp: private person(){
	int sl;
	string comp;
	public:
		void get();
		void put();
}
void emp::get(){
	getData();
	cout<<"Company name::";
	cin>>comp;
	cout<<"SAlary::";
	cin>>sl;
}
void emp::put(){
	display();
	cout<<"Company:"<<comp<<endl;
	cout<<"SAlary:"<<sl<<endl;
}
int main(){
	student s;
	s.getInfo();
	s.putInfo();
	emp e;
	e.get();
	e.put();
	return 0;
}
