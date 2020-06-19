#include<bits/stdc++.h>
using namespace std;
class Student{
	private :
		int marks;
	public:
		Student(int m){
			marks=m;
		}
		Student(){
			marks = 0;
		}
		void setMarks(int z){
			marks = z;
		}
		int getMarks(){
			return marks;
		}
};
template<class X>
void Process(X arr[],int n){
	int Max = arr[0].getMarks(),Min = arr[0].getMarks(),sum=0;
	for(int i=0;i<n;i++){
		if(arr[i].getMarks()>Max){
			Max = arr[i].getMarks();
		}
		if(arr[i].getMarks()<Min){
			Min = arr[i].getMarks();
		}
		sum = sum+arr[i].getMarks();
	}
	cout<<"The av marks of the class is"<<(sum/10)<<endl;
	cout<<"The highest marks in the class is"<<Max<<endl;
	cout<<"The minimum marks in the class is"<<Min<<endl;
}
int main(){
	Student s[10];
	cout<<"Enter the marks of the 10 students"<<endl;
	for(int i=0;i<10;i++){
		int z;
		cin>>z;
		s[i].setMarks(z);
	}
	Process(s,10);
}
