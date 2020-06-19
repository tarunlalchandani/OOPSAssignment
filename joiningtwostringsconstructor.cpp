#include <iostream>
#include <string.h>
using namespace std;
class abc
{
	char *st;
	int len;
	public:
		abc(char *s)
		{
			len=strlen(s);
			st=new char[len+1];
			st=s;
		}
		abc(abc &a,abc &b)
		{
			len=strlen(a.st)+strlen(b.st);
			st=new char[len+1];
			strcpy(st,a.st);
			strcat(st,b.st);
		}
		
		void show()
		{
			cout<<st<<"\n";
		}
};
int main()
{
	abc ob1("fix");
	abc ob2("you");
	abc ob3(ob1,ob2);
	ob1.show();
	ob2.show();
	ob3.show();
	return 0;
	
}
