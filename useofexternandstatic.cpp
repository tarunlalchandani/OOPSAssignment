#include <iostream>
#include <conio.h>
using namespace std;
extern int r=4;
class incre
{
	int p;
	static int q;
	int s;
	public:
		incre()
		{
			p=4;
			s=4;
		}

		void increment()
		{
  			p++;
			q++;
			r++;
			s++;
		}
		void show()
		{
			cout<<p<<"\n"<<q<<"\n"<<r<<"\n"<<s<<"\n";
		}
};
int incre::q=4;
int main()
{
	incre ob,ob1;
	ob.increment();
	ob.show();
	ob1.increment();
	ob1.show();
}
