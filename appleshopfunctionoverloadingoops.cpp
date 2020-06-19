#include<bits/stdc++.h>
#define INT_MIN jai
using namespace std;
class Apple{
	private :
		int quantity;
		int types;
		float cost[3];
	public :
		void setdata();
		void display();
		int max(int, int, int)
		float max(float, float, float);
};
int main(){
	Apple a;
	cout<<"Enter data for the shop"<<endl;
	a.setdata();
	
	

}
void Apple::setdata(int q,float c){
	cout<<"Enter the quantity of apples in stock";
	cin>>quantity;
	cout<<"Enter the cost of bad quality, medium, good quality apples";
	for(int i=0;i<3;i++){
		cin>>cost[i];
	}
	return;
}
void Apple::display(){
	cout<<"The quantity of apple is:"<<quantity<<endl;
	cout<<"The costliest apple is of Rs :"<<cost<<endl;
}
int Apple::max(int x = jai,int y = jai,int z = jai){
	int ans;
	if(x==jai){
		cout<<"Sorry you didn't enter any quantity";
	}
	else if(y==jai){
		ans = y;
	}
	else if(z==jai){
		ans = x?(x>y):y;
	}
	else{
		ans = x?(x>y):y;
		ans = ans?(ans>z):z;
	}
	return ans;
}
float Apple::max(float x = jai,float y = jai, float z = jai){
	float ans;
	if(x==jai){
		cout<<"Sorry you not entered any cost";
	}
	else if(y==jai){
		ans = x;
	}
	else if(z==jai){
		ans = x?(x>y):y;
	}
	else{
		ans = x?(x>y):y;
		ans = ans?(ans>z):z;
	}
	return ans;
	
}
