#include<bits/stdc++.h>
using namespace std;
class B {
	public :
		B(char c[]){
			int l = 0;
			while(*(c+l)!='\0'){
				l++;
			}
			int k;
			cout<<"Enter k";
			cin>>k;
			for(int i=0;i<l;i++){
				int z = (i+k)%l;
				cout<<c[z];
			}
			cout<<"\n";
		}
		B(char s1[], char s2[]){
			int l1 = 0,l2 = 0;
			while(*(s1+l1)!='\0'){
				l1++;
			}
			while(*(s2+l2)!='\0'){
				l2++;
			}
			if(l1>l2){
				cout<<"First is bigger with length"<<l1;
			}
			else if(l1<l2){
				cout<<"Second is bigger with length"<<l2;
			}
			else if(l1==l2){
				cout<<"Both are equal";
			}
		}
		B(char s1[],char s2[],char s3[]){
			int l1=0, l2=0, l3=0;
			while(s1[l1]!='\0'){
				l1++;
			}
			while(s2[l2]!='\0'){
				l2++;
			}
			while(s3[l3]!='\0'){
				l3++;
			}
			
		}

};
int main(){
		char s[] = "Haribol";
		B b1(s);
		return 0;
}
