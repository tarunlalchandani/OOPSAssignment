#include<bits/stdc++.h>
using namespace std;
template<class T,int n>
class Set{
	private:
		int size;
		T* ptr;
	public:
		Set(int d){
			ptr = new T[n];
			size = n;
		}
		void getdata(){
			cout<<"Enter elements"<<endl;
			for(int i=0;i<size;i++){
				cin>>ptr[i];
			}
		}
};
int main(){
	Set<int,5> s2;
	Set<int,7> s1;
	
}
