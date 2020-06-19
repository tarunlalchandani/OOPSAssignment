#include <iostream>
using namespace std;
template<class t1,class t2> class t
{
	t1 a;
	t2 b;
	public:
		t(t1 x,t2 y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<a+b<<endl;
		}
};
int main()
{
	t<int,float> ob1(5,5.54);
	t <int,int>ob2(5,6);
	ob1.show();
	ob2.show();
	return 0;
}
