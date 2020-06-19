#include <iostream>
using namespace std;
class increment
{
	private:
		int a;
	public:
		void getdata()
		{
			cout<<"enter the number to be incremented \n";
			cin>>a;
		}
		increment operator ++()
		{
			increment o;
			 o.a=++a;
			 return o;
		}
		increment operator ++(int)
		{
			 increment o;
			 o.a=a++;
			 return o;
		}
		void display()
		{
			cout<<a<<"\n";
		}
};
int main()
{
	increment ob1;
	ob1.getdata();
	++ob1;
	cout<<"value after prefix increment\n";
	ob1.display();
	ob1++;
	cout<<"value after postfix increment\n";
	ob1.display();
	return 0;
}
