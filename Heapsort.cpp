//Heapsort
#include<bits/stdc++.h>
using namespace std;
void maxHeapify(vector<int> &arr,int i){
	int posmax,a = -100,b = -100,c = -100;
	a = arr[i];
	if(2*i+1<arr.size()){
			b = arr[2*i+1];
	}
	if(2*i+2<arr.size()){
			c = arr[2*i+2];
	}
	if(a>b and a>c){
		posmax = i;
	}
	else if(b>a and b>c){
		posmax=2*i+1;
		int temp = arr[i];
		arr[i] = arr[2*i+1];
		arr[2*i+1] = temp;
	}
	else if(c>a and c>b){
		posmax = 2*i+2;
		int temp = arr[i];
		arr[i] = arr[2*i+2];
		arr[2*i+2] = temp;
	}
	cout<<posmax;
	cout<<"array is:"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	if(posmax!=i){
		maxHeapify(arr,posmax);
	}
	return;
}
void BuildHeapify(vector<int>& arr){
	int num = arr.size();
	int n = num/2-1;
	cout<<"n: "<<n<<endl;
	for(int i=n;i>=0;i--){
		maxHeapify(arr,i);
		cout<<"i: "<<i;
		cout<<"array is :";
		for(int j=0;j<arr.size();j++){
			cout<<arr[j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	BuildHeapify(v);
	int num = n/2-1;
	while(num>=0){
		cout<<v[num]<<" ";
		if(v[num*2+1]>v[num*2+2]){
			cout<<v[num*2+1]<<" "<<v[num*2+2]<<" ";
		}
		else{
			cout<<v[num*2+2]<<" "<<v[num*2+1]<<" ";
		}
		if(num%2==0){
			num = num/2-1;
		}
		else{
			num = num/2;
		}
	}
	return 0;
}
