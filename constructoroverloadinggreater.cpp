#include <iostream>
using namespace std;
class max
{
	int p,q,r;
	public:
		max(int x,int y)
		{
			p=x;q=y;
			if(p>q)
			cout<< p;
			else cout<< q;
		}
		max(int x,int y,int z)
		{
			p=x;q=y;r=z;
			int m=0;
			if(p>q)
			{
				if(p>r)
				m=p;
				else
				m=r;
			}
			else
			{
				if(q>r)
				m=q;
				else
				m=r;
			}
			cout<< m;
		}
};
int main()
{
	max ob1(4,3);
	max ob2(3,6,1);
	return 0;
}
