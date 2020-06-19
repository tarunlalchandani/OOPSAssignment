#include<bits/stdc++.h>
using namespace std;
template<class T>
class Vector{
	private :
		int size;
		T* ptr;
	public:
		int length(){
			return size;
		}
		Vector(int x, T d=0){
			size = x;
			ptr = new T[x];
			for(int i=0;i<x;i++){
				*(ptr+i) = d;
			}
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<ptr[i]<<" ";
			}
		}
		void erase(){
			delete ptr;
			size = 0;
		}
		void reverse(){
			int n = size/2;
			for(int i=0;i<n;i++){
				*(ptr+i) = *(ptr+size-i-1);
			}
		}
		void getData(){
			for(int i=0;i<size;i++){
				cin>>ptr[i];
			}
		}
		bool search(int x){
			int i=0;
			while(*(ptr+i)!=x and i<size){
				i++;
			}
			if(*(ptr+i)==x){
				return true;
			}
			else{
				return false;
			}
		}
		
};
int main(){
	Vector<int> v(10);
	cout<<"Enter values to the array"<<endl;
	v.getData();
	v.reverse();
	cout<<v.search(10)<<endl;
	cout<<v.length()<<endl;
		v.display();
	v.erase();

	cout<<v.length();
	return 0;
}
