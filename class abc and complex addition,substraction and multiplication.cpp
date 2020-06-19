#include <iostream>
using namespace std;
class abc
{
	private:
		int x;
		int y;
	public:
		abc(int a,int b)
		{
			x=a;
			y=b;
		}
		abc()
		{
			x=0;
			y=0;
		}
		abc operator +(abc ob2)
		{
			abc ob;
			ob.x=x+ob2.x;
			ob.y=y+ob2.y;
			return ob;
		}
		abc operator -(abc ob2)
		{
			abc ob;
			ob.x=x-ob2.x;
			ob.y=y-ob2.y;
			return ob;
		}
		abc operator *(abc ob2)
		{
			abc ob;
			ob.x=x*ob2.x-y*ob2.y;
			ob.y=x*ob2.y+y*ob2.x;
			return ob;
		}
		void display();
};


void abc::display()
{
	cout<<x<<" + i"<<y<<"\n";
}
int main()
{
	abc ob1(9,5);
	abc ob2(3,1);
	abc ob3,ob4,ob5;
	ob3=ob1+ob2;
	ob4=ob1-ob2;
	ob5=ob1*ob2;
	cout<<"two complex numbers are:\n";
	ob1.display();
	ob2.display();
	cout<<"result of addition:\n";
	ob3.display();
	cout<<"result of subtraction: \n";
	ob4.display();
	cout<<"result of multiplication: \n";
	ob5.display();
	return 0;
}
