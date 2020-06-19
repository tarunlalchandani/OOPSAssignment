//All sorts in one program;
#include<bits/stdc++.h>
using namespace std;
void QuickSortRec(vector<int>& arr,int beg,int end){
	if(end==beg+1){
		return;
	}
	int pivot = arr[beg];
	int k=beg;
	for(int i=beg+1;i<end;i++){
		if(pivot>arr[i]){
			arr[k] = arr[i];
			for(int j=i-1;j>k;j--){
				arr[j+1] = arr[j];
			}
			arr[j+1] = pivot;
			k = j+1;
		}
	}
	int jai = (end-beg)/2+beg;
	QuickSortRec(arr,beg,jai);
	QuickSortRec(arr,jai,end);
}
void MergeSort(vector<int>& arr,int beg,int end){
	int i,j;
	int k = beg+(end-beg)/2;
	if(end==beg+1){
		return;
	}
	MergeSort(arr,beg,k);
	MergeSort(arr,k,end);
	vector<int> help;
	for(i=beg,j=k;i<k and j<end;){
		if(arr[j]<arr[i]){
			help.push_back(arr[j]);
			cout<<"help status block 1"<<endl;
			for(int o=0;o<help.size();o++){
				cout<<help[o]<<" "<<endl;
			}
			j++;

		}
		else if(arr[i]<arr[j]){
			help.push_back(arr[i]);
			cout<<"help status block 2"<<"i: "<<i<<"j: "<<j<<"k: "<<k<<endl;
			for(int o=0;o<help.size();o++){
				cout<<help[o]<<" "<<endl;
			}
			i++;
		}
		else if(arr[i]==arr[j]){
			cout<<"i: "<<i<<"j: "<<j<<"k: "<<k;
			help.push_back(arr[i]);
			help.push_back(arr[j]);
			cout<<"help status block 3"<<endl;
			for(int o=0;o<help.size();o++){
				cout<<help[o]<<" "<<endl;
			}
			i++;
			j++;
		}
	}
	if(i<k){
		for(int z=i;z<k;z++){
			help.push_back(arr[z]);
		}

		cout<<"help status block 4"<<endl;
			for(int o=0;o<help.size();o++){
				cout<<help[o]<<" "<<endl;
			}
	}
	else if(j<end){
		for(int z=j;z<end;z++){
			help.push_back(arr[z]);
		}
		cout<<"help status block 5"<<endl;
			for(int o=0;o<help.size();o++){
				cout<<help[o]<<" "<<endl;
			}
	}
	for(i=beg;i<end;i++){
		arr[i] = help[i-beg];
	}
	cout<<"status of array"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" "<<endl;
	}
	help.clear();
	return;
}
void InsertionSort(vector<int>& arr){
	int n = arr.size();
	for(int i=2;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(arr[i]<arr[j]){
				int temp = arr[i]+arr[j];
				arr[i] = temp - arr[i];
				arr[j] = temp - arr[i];
			}
		}
	}
	return;
}
void SelectionSort(vector<int>& arr){
	int n = arr.size();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i]+arr[j];
				arr[i] = temp-arr[i];
				arr[j] = temp - arr[i];
			}
		}
	}
	
	return;
}
int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	vector<int> arr(n,0);
	cout<<"Enter values"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int choice;
	cout<<"Press 2 for merge sort 1 for insertion sort and 0 for selection sort"<<endl;
	cin>>choice;
	if(choice==0){
		SelectionSort(arr);
			cout<<"After Selection sort the array becomes"<<endl;
	}
	else if(choice==1){
		InsertionSort(arr);
			cout<<"After insertion sort the array becomes"<<endl;
	}
	else if(choice==2){\
		MergeSort(arr,0,arr.size());
			cout<<"After merge sort the array becomes"<<endl;
	}
	else if(choice==3){
		QuickSortRec(arr,0,arr.size());
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
