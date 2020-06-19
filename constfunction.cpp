#include<bits/stdc++.h>
using namespace std;
class Volume{
	private :
		float vol = 4;
	public :
		void setdata();
		float conversion() const {return vol*1000;}
};

int main(){
	Volume v;
	cout<<v.conversion();
}
