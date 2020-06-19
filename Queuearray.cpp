#include<bits/stdc++.h>
using namespace std;
int Front = 0;
int Size = 0;
int max_size = 50;
int Pop(int* arr){
	int ans = -1;
	if(Front==Size){
		cout<<"Queue Underflow"<<endl;
		return ans;
	}
	else{
		ans = arr[Front];
		arr[Front] = -1;
		Front++;

		return ans;
	}
}
void Push(int* arr,int x){
	if(Size == max_size){
		cout<<"Queue Overflow";
	}
	else{
		arr[Size] = x;
		Size++;
	}
	return;
}
void Display(int* arr){
	if(Front == Size){
		cout<<"Queue Underflow"<<endl;
	}
	else{

		for(int i=Front;i<Size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return;
}
int main(){
	int arr[max_size];
	int x;
	while(x!=-1){
		cout<<"Enter x, -1 for loop stop, and 0 for popping"<<endl;
		cin>>x;
		if(x==0){
			Pop(arr);
		}
		else{
			Push(arr,x);
		}
		Display(arr);
	}
	return 0;
}
