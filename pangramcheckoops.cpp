#include<bits/stdc++.h>
using namespace std;
class Base{
	private:
		string s1;
	public :
		Base(string st){
			s1 = st;
		}
		string getString(){
			return s1;
		}
};
class Derived:public Base{
	private:
		string s2,s3;
	public:
		Derived(string st1,string st2): Base(st1){
			s2 = st1;
			s3 = st2;
		}
};
void checkPangram(Base& obj){
	string s = obj.getString();
	cout<<s<<endl;
	vector<char> haribol;
	for(int i=0;i<s.size();i++){
		if((s[i]>=65 and s[i]<=90) or (s[i]>=97 and s[i]<=122)){
			haribol.push_back(s[i]);
		}
	}
 
 for(int i=0;i<haribol.size();i++){
   if(haribol[i]>=65 and haribol[i]<=90){
     haribol[i] = haribol[i] + 32;
   }
 }
 vector<char> v;
 sort(haribol.begin(),haribol.end());
 for(int i=0;i<haribol.size();i++){
 	if(haribol[i]!=haribol[i+1]){
		v.push_back(haribol[i]);
 	}
 }
 string jai(v.begin(),v.end());
 
	string t = "abcdefghijklmnopqrstuvwxyz";
	if(t == jai){
		cout<<"s is a pangram";
	}
	else{
		cout<<"s is not a pangram";
	}
	return;
}
int main(){
	string user;
	cout<<"Enter the string";
	getline(cin,user);
	string c(user);
	Derived dobj(c,"HR");
	Base bobj = dobj;
	checkPangram(bobj);
}
