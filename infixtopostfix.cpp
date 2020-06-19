#include<bits/stdc++.h>
using namespace std;
int priority(char c){
	switch(c){
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '-':return 1;
		case '(':return 3;
		case ')':return 3;
		default:return 4;
	}
}
int main(){
	string s;
	cin>>s;
	stack<char> st;
	vector<char> v;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(s[i]);
		}
		else if(s[i]>=49 and s[i]<=57){
			v.push_back(s[i]);
		}
		else if(s[i]==')'){
			while(st.top()!='('){
				v.push_back(st.top());
				st.pop();
			}
			st.pop();
		}
		else if(s[i]>=42 and s[i]<=47){
			while(priority(st.top())<=priority(s[i])){
				st.pop();
			}
			st.push(s[i]);
			
		}
		
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
