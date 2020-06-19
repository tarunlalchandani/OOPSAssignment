#include<bits/stdc++.h>
using namespace std;
class Animal{
	public :
		Animal(){
			cout<<"Hello Animal"<<endl;
		}
		virtual void printMessage(){
			cout<<"HK Animal"<<endl;
		}
};
class Reptile:public Animal{
	public :
		Reptile(){
			cout<<"Hello Reptile"<<endl;
		}
		void printMessage(){
			cout<<"HK Reptile"<<endl;
		}
};
class Mammal:public Animal{
	public :
		Mammal(){
			cout<<"Hello Mammal"<<endl;
		}
		void printMessage(){
			cout<<"HK Mammal"<<endl;
		}
};
void intermediateFunction(Animal* zebra){
	zebra->printMessage();
}
int main(){
	Animal* lizard;
	Animal* whale;
	lizard = new Reptile;
	whale = new Mammal;
	intermediateFunction(lizard);
	intermediateFunction(whale);
	return 0;
}
