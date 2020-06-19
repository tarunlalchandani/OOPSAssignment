#include<bits/stdc++.h>
using namespace std;
template<class X>
void InsertionSort(X a[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				X temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "<<endl;
	}
	return;
}
int main(){
	int n;
	int e;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	cout<<"For int array press 1,double array press 2"<<endl;
	cin>>e;
	if(e==1){
		int arr[n];
		cout<<"Enter Elements"<<endl;
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		InsertionSort(arr,n);
	}
	else if(e==2){
		double arr[n];
		cout<<"Enter Elements"<<endl;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		InsertionSort(arr,n);
	}
	return 0;
}
