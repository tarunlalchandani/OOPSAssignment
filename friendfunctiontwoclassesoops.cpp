#include <iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		void getdata()
		{
			a=10;
		}
		void show(B x);
};
class B
{
	int b;
	public:
		void getdata()
		{
			b=20;
		}
		friend void A::show(B x);
};
void A::show(B x)
		{
			cout<<x.b;
		}
int main()
{
	A ob1;
	B ob2;
	ob1.getdata();
	ob2.getdata();
	ob1.show(ob2);
}
