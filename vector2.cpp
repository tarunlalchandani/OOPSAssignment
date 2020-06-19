#include<bits/stdc++.h>
using namespace std;
template<class T>
class vec
{
	private:

		int size;
		int *ptr;
	public:
		int length()
		{return size;
		}

	vec(int x,T d=0)
	{
	 int i;
		size =x;
		 ptr=new T[x];
		 for(i=0;i<size;i++)
		 {
		 	*(ptr+i)=d;
		 }
	}
	void display()
	{
		
		for(int i=0;i<size;i++)
		{
			cout<<ptr[i]<<"  ";
		}
	}
	void del()
	{
		delete ptr;
		size=0;
	}
	void getdata()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cin>>ptr[i];
		}
	}
	bool search(int x)
	{
		int i=0;
		while(*(ptr+i)!=x&&i<size)
		{
			i++;
		}
		if(*(ptr+i)==x)
		{
			return true;cout<<"\n value found!!!";
		}
		else
		{

			return false;
		    cout<<"\n value not found!!!";
		    
		}
		
	}
	

};
int main()
{vec<int> v(10);
int a;
cout<<"\n enter the value of array:";cin>>a;
v.getdata();
v.search(20);
	cout<<v.length();
	return 0;
}

	
	
	
	



