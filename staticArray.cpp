#include<bits/stdc++.h>
using namespace std;
template<class T,int n>
class Vector{
	private :
		int size;
		T* ptr;
	public:
		int length(){
			return size;
		}
		Vector(T d=0){
			size = n;
			ptr = new T[n];
			for(int i=0;i<n;i++){
				*(ptr+i) = d;
			}
		}
		void display(){
			for(int i=0;i<size;i++){
				cout<<ptr[i]<<" ";
			}
			cout<<endl;
		}
		void erase(){
			delete ptr;
			size = 0;
		}
		void reverse(){
			int jai= size/2;
			for(int i=0;i<jai;i++){
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
	Vector<int,10> v;
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
