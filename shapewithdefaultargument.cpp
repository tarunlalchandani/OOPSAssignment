#include<bits/stdc++.h>
#define default INT_MIN
using namespace std;
void area(int a = default, int b = default, int c = default){
	if(a==default and b==default and c==default){
		cout<<"Please enter some argument";
	}
	else if(a!=default and b==default and c==default){
		cout<<"The area of the circle is"<<3.14*a*a<<endl;
	}
	else if(a!=default and b!=default and c==default){
		cout<<"The area of the reactangle is"<<a*b<<endl;
	}
	else if(a!=default and b!=default and c!=default){
		float s = (a+b+c)/2;
		
		s = s*(s-a)*(s-b)*(s-c);
		
		s = sqrt(s);
		cout<<"The area of the traingle is"<<s<<endl;
	}
	return ;
}
class Circle{
	private :
		int radius;
	public:
		void setdata();
		int getradius();
};
int Circle::getradius(){
	return radius;
}
void Circle::setdata(){
	cout<<"Enter the radius"<<endl;
	cin>>radius;
	return;
}
class Rectangle{
	private:
		int length,breadth;
	public:
		void setdata();
		int getlength();
		int getbreadth();
};
int Rectangle::getlength(){
	return length;
}
int Rectangle::getbreadth(){
	return breadth;
}
void Rectangle::setdata(){
	cout<<"Enter the length"<<endl;
	cin>>length;
	cout<<"Enter the breadth"<<endl;
	cin>>breadth;
	return;
}
class Traingle{
	private:
		int s1,s2,s3;
	public :
		void setdata();
		int getdatas1();
		int getdatas2();
		int getdatas3();
};
int Traingle::getdatas1(){
	return s1;
}
int Traingle::getdatas2(){
	return s2;
}
int Traingle::getdatas3(){
	return s3;
}
void Traingle::setdata(){
	cout<<"Enter the sides of the Traingle"<<endl;
	cin>>s1>>s2>>s3;
	return;
}
int main(){
	Circle c;
	Rectangle r;
	Traingle t;
	c.setdata();
	r.setdata();
	t.setdata();
	area(c.getradius());
	area(r.getlength(),r.getbreadth());
	area(t.getdatas1(),t.getdatas2(),t.getdatas3());
}
