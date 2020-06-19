#include<bits/stdc++.h>
using namespace std;
class B{
	public:
		virtual ~B(){
			cout<<"Base virtual destructor called"<<endl;
		}
};
class D:public B{
	public:
		~D(){
			cout<<"Derived class Destructor is called \n"<<endl;
		}
};
int main(){
	B *ptr = new D;//memory allocation to derived object
	delete ptr;
	return 0;
}
