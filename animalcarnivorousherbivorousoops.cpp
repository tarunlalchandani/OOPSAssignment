#include<bits/stdc++.h>
using namespace std;
class Animals{
	public :
		string planet = "Earth";
};
class Carnivores :virtual public Animals{
	public :
		string eat = "animals";
};
class Herbivores :virtual public Animals{
	public :
		string eat = "plants";
};
class Omnivores : public Carnivores, public Herbivores{
	public :
		string eat = "both";
};
int main(){
	Omnivores dog;
	dog.planet = "moon";
	cout<<dog.planet;
}
