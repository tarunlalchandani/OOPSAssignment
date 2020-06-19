#include <iostream>
using namespace std;
class xyz
{
	private:
		char x[50],y[50],z[50];
	public:
		
		xyz(char a[50],char b[50])
		{
			int m=0;
			while(a[m]!='\0')
			{
				x[m]=a[m];
				m++;
			}
			int n=0;
			while(b[n]!='\0')
			{
				y[n]=b[n];
				n++;
			}
			void len(x,y);
		}
		xyz(char a[50],char b[50],char c[50])
		{
			int m=0;
			while(a[m]!='\0')
			{
				x[m]=a[m];
				m++;
			}
			int n=0;
			while(b[n]!='\0')
			{
				y[n]=b[n];
				n++;
			}
			int p=0;
			while(c[p]!='\0')
			{
				z[p]=c[p];
				p++;
			}
			void common(x,y,z);
		}
		void shift(char q[])
		{
			
			
		}
		void len(char q[],char w[])
		{
			int l1,l2;
			l1=0;
			l2=0;
			while(q[l1]!='\0')
			l1++;
			while(w[l2]!='\0')
			l2++;
			if(l1>l2)
			cout<<"String 1 is longer than string 2 by "<<l1-l2<<"\n";
			if(l2>l1)
			cout<<"String 2 is longer than string 1 by "<<l2-l1<<"\n";
			if(l2>l1)
			cout<<"String 1 and 2 have equal length"<<l1<<"\n";
		}
		void common(char q[],char w[],char e[])
		{
			char o[50];
			int a=0;
			int i=0;
			int f=0;
			while(e[i]!='\0')
			{
				f=0;
				int j=0;
				while(q[j]!='\0')
				{
					if(q[j]==e[i])
					{
						o[a]=q[j];
						f=1;
						a++;
						break;
					}
					j++;
				}
				int k=0;
				if(f==0)
				{
				while(w[k]!='\0')
				{
					if(w[k]==e[i])
					{
					o[a]=w[k];
					a++;
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
	xyz ob1("hello","hola");
	xyz ob2("hello","world","yellow");
	return 0;
}
