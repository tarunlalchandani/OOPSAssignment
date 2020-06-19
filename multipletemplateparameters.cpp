#include<bits/stdc++.h>
using namespace std;
template<class X, class Y>
class Sum{
	X a;
	Y b;
	public:
		void getData(X s, Y t){
			a = s;
			b = t;
		}
		void printSum(){
			cout<<(Y)(a+b);
		}
};
int main(){
	Sum<int,double> s;
	s.getData(5,89.4);
	s.printSum();
	return 0;
}
