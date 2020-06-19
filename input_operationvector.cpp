#include<bits/stdc++.h>
using namespace std;
template<class X>
class Input{
	protected :
		vector<X> v;
		int choice;
	public:
		void addItem(X item){
			v.push_back(item);
		}
		
};
class Operation: public Input<string>{
		public :
			void write_sorted(){
				sort(v.begin(),v.end());
				for(int i=0;i<v.size();i++){
					cout<<v[i]<<endl;
				}
			}
};
int main(){
	Operation op;
	string st;
	cin>>st;
	while(st!="Quit"){
		op.addItem(st);
		cin>>st;
	}
	op.write_sorted();
	return 0;
}
