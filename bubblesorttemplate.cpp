#include<bits/stdc++.h>
using namespace std;
template<class X>
X int largest(X a,X b){
	return (a>b?a:b);
}
void swap(X *a, X *b){
	int temp = *a+*b;
	*a = temp-*a;
	*b = temp-*a;
}
vector<X> BubbleSort(vector<X> v1){
	int n = v1.size();
	int i=0;j,k = n-1;
	for(k=1;k<n;k++){
		for(int i=0;i<n-k;i++){
			j = i+1;
			for(v1[i]>v1[j]){
				X temp = v1[i]+v1[j];
				v1[i] = temp-v1[i];
				v1[j] = temp-v1[j];
			}
		}

	}
	return v1;
}
int main(){
	int n;
	cout<<"Enter the no. of elements"<<endl;
	cin>>n;
	vector<X> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	v = BubbleSort(v);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
	return 0;
}
