#include<bits/stdc++.h>
using namespace std;
class A{
	public :
		A(string s){
		   cout<<palindrome(s)<<endl;
		}
		A(string s1, string s2){
			cout<<"so "<<same(s1,s2)<<endl;
		}
		A(string s1,string s2,string s3){
			cout<<"After concatenation"<<concat(s1,s2,s3)<<endl;
		}
		string palindrome(string);
		string same(string,string);
		string concat(string, string ,string);
};
string A::concat(string s1,string s2, string s3){
	s1 = s1+s2+s3;
	return s1;
}
string A::palindrome(string s){
	int l = s.size();
	int i = 0;
	int j = l-1;
	while(i<j){
		if(s[i]!=s[j]){
			s = " Not a palindrome";
			break;
		}
		i++;
		j--;

	}
	if(i<j){
		return s;
		
	}
	else{
		s = "Yes it is a palindrome";
		return s;
	}
}
string A::same(string s1, string s2){
	if(s1==s2){
		s1 = " They are same";

	}
	else{
		s1 = "They are not same";

	}
	return s1;
}
int main(){
	string x = "abccba";
	string y = "abc";
	string z = "abc";
	string s1 = "hari",s2 = "hari",s3 = "Bol";
	A a = A(x);
	A b(y,z);
	A c(s1,s2,s3);
	return 0;
}
