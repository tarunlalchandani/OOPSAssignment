#include <iostream>
using namespace std;
class frnd
{
	int a,b,c;
	public:
		void getdata()
		{
			cout<<"enter the value of a,b\n";
			cin>>a>>b;
		}
		friend int cal(frnd ob);
};
int cal(frnd ob)
{
	ob.c=ob.a+ob.b;
}
int main()
{
	frnd ob1;
	ob1.getdata();
	cout<<cal(ob1);
}
