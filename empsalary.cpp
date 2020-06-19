#include <iostream>
using namespace std;
class employee
{
	protected:
	int empid;
	int empsalary;
	float empda;
	public:
		void getdata()
		{
			cout<<"enter salary\n";
			cin>>empsalary;
		}
		void calcda()
		{
			empda=empsalary*0.02;
		}
		void show()
		{
			cout<<"Salary ="<<empsalary<<"\t and DA= "<<empda<<"\n";
		}
		
};
int main()
{
	employee ob[25];
	for(int i=0;i<25;i++)
	{
		cout<<"Employee id="<<i+1<<"\n";
		ob[i].getdata();
		ob[i].calcda();
	}
	cout<<"\n\nEmployee details\n";
	for(int j=0;j<25;j++)
	{
		cout<<"Employee id="<<j+1<<"\n";
		ob[j].show();
	}
}
