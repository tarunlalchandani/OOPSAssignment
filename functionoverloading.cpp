#include<bits/stdc++.h>
using namespace std;
class A{
	private :
		int a,b,c;
		float d,e,f;
	public :
		int max(int ,int, int);
		float max(float, float, float);
		int max(int, int);
		float max(float , float);
		void setdata();
		void result();
};
void A::result(){
	cout<<"Max among a and b is"<<max(a,b)<<endl;
	cout<<"Max among d and e is"<<max(d,e)<<endl;
	cout<<"Max among a,b,c is"<<max(a,b,c)<<endl;
	cout<<"Max among d,e,f is"<<max(d,e,f)<<endl;
	return;
}
void A::setdata(){
	cout<<"Enter a, b, c which are int";
	cin>>a>>b>>c;
	cout<<"Enter d, e, f which are float";
	cin>>d>>e>>f;
}
int A::max(int x, int y){
	int ans = x>y?x:y;
	return ans;
}
int A::max(int x,int y, int z){
	int ans = x>y?x:y;
	ans = z>ans?z:ans;
	return ans;
}
float A::max(float x, float y){
	float ans = x>y?x:y;;
	return ans;
}
float A::max(float x, float y, float z){
	float ans = (x>y)?x:y;
	ans = ans>z?ans:z;
	return ans;
}
int main(){
	A z;
	z.setdata();
	z.result();
	return 0;
}
