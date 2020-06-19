#include <iostream>
using namespace std;
class xyz
{
	private:
		char x[50],y[50],z[50];
	public:
		xyz(char a[])
		{
			int k;
			char ans[50];
			cout<<"enter the value for k-circular shift\n";
			cin>>k;
			int l1=0;
			while(a[l1]!='\0')
			l1++;
			int i=0;
			while(a[i]!='\0')
			{
				int v=(i+k)%l1;
				ans[v]=a[i];
				i++;
			}
			int h=0;
			for(h=0;h<l1;h++)
			cout<<ans[h];
			cout<<"\n";
		}
		xyz(char a[],char b[])
		{
			int l1,l2;
			l1=0;
			l2=0;
			while(a[l1]!='\0')
			l1++;
			while(b[l2]!='\0')
			l2++;
			if(l1>l2)
			cout<<"String 1 is longer than string 2 by "<<l1-l2<<"\n";
			if(l2>l1)
			cout<<"String 2 is longer than string 1 by "<<l2-l1<<"\n";
			if(l2>l1)
			cout<<"String 1 and 2 have equal length"<<l1<<"\n";
		}

			int v=0;
			int i=0;
			int f=0;
			while(c[i]!='\0')
			{
				f=0;
				int j=0;
				while(a[j]!='\0')
				{
					if(a[j]==c[i])
					{
						o[v]=a[j];
						f=1;
						v++;
						break;
					}
					j++;
				}
				int k=0;
				if(f==0)
				{
				while(b[k]!='\0')
				{
					if(b[k]==c[i])
					{
					o[v]=b[k];
					v++;
					break;
					}
					k++;
				}
				}
				i++;
			}
			int g=0;
			while(o[g]!='\0')
			{
				cout<<o[g];
				g++;
			}
		}
};
int main()
{
	xyz ob("jumble");
	xyz ob1("hello","hola");
	xyz ob2("hello","world","yellow");
	return 0;
}
