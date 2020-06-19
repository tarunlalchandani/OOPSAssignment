#include<iostream>
#include<string>
using namespace std;
class first{
	int b_no;
	string b_name;
	public:
		void getData();
		void putData();
};
class second{
	string auth_name;
	string publisher;
	public:
		void getData();
		void showData();
};
class third : public first,public second{
	int nofpg;
	int yrofpub;
	public:
		void display();
		void getData();
};
void first::getData(){
	cout<<"Enter book name: ";
	cin>>b_name;
	cout<<"Enter book no: ";
	cin>>b_no;
}
void first::putData(){
	cout<<"Book NAme: "<<b_name<<endl;
	cout<<"Book No: "<<b_no<<endl;
}
void second::getData(){
	cout<<"Author name :";
	cin>>auth_name;
	cout<<"Publisher:";
	cin>>publisher;
}
void second::showData(){
	cout<<"Author is: "<<auth_name<<endl;
	cout<<"Publisher NAme: "<<publisher<<endl;
}
void third::getData(){
	first::getData();
	second::getData();
	cout<<"NO  of pages:";
	cin>>nofpg;
	cout<<"Year of publication: ";
	cin>>yrofpub;
}
void third::display(){
	putData();
	showData();
	cout<<"No of PAges: "<<nofpg<<endl;
	cout<<"Year of publication : "<<yrofpub<<endl;
}
int main(){
	third book[2];
	for(int i=0;i<2;i++)
		book[i].getData();
	cout<<"Entered DAta\n";
	for(int i=0;i<2;i++){
		book[i].display();
	}

}
