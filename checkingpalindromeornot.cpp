#include <iostream>
using namespace std;
class abc
{
	public:
		abc(char a[])
		{
			int l=0,f=0;
			while(a[l]!='\0')
			l++;
			int i;
			for(i=0;i<l/2;i++)
			{
				if(a[i]!=a[l-1-i])
				{
					f=1;
					break;
				}
			}
			if(f==0)
			cout<<"Palindrome\n";
			else
			cout<<"not plaindrome\n";
		}
		abc(char a[],char b[])
		{
			int l1,l2;
			l1=0;
			l2=0;
			while(a[l1]!='\0')
			l1++;
			while(b[l2]!='\0')
			l2++;
			if(l1!=l2)
			cout<<"not equal\n";
			else
			{
				int f=0;
				int i;
				for(i=0;i<l1;i++)
				{
					if(a[i]!=b[i])
					f=1;
				}
				if(f==0)
				cout<<"equal\n";
				else
				cout<<"not equal\n";
			}
		}
			abc(char a[],char b[],char c[])
		     {
		     int l3,l1,l2;
			l1=0;
			l2=0;
			l3=0;
			while(a[l1]!='\0')
			l1++;
			while(b[l2]!='\0')
			l2++;
		     while(c[l3]!='\0')
			l3++;
			char o[l1+l2+l3];
			int i,j,k;
			int z=0;
			for(i=0;i<l1;i++)
			{
				o[z]=a[i];
				z++;
			}
			for(j=0;j<l2;j++)
			{
				o[z]=b[j];
				z++;
			}
			for(k=0;k<l3;k++)
			{
				o[z]=c[k];
				z++;
			}
			int s;
			for(s=0;s<=z;s++)
			cout<<o[s];
		}
		
};
int main()
{
	abc o1("boring");
	abc o2("get","get");
	abc o3("afds","et","weryt");
	return 0;
}
