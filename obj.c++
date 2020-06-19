#include<iostream>
#include<string>
using namespace std;
class obj{
	int a;
	public:
		obj(){
			a=100;
		}
		void thisFn(){
			int a=7;
			cout<<"This:"<<this->a;
			cout<<"A:"<<a;
		}
};
int main(){
	obj c;
	c.thisFn();
}
