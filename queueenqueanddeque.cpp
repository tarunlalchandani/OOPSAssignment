#include <iostream>
using namespace std;
template <class t,int m> class que
{
	t* arr;
	int front;
	int rear;
	int capacity;

	
	public:
			int size;
		que()
		{
			arr=new int[m];
			front =0;
			rear=0;
			capacity=m;
			size=0;
		}
		void enque(t o)
		{
			//if(rear==0 && front==0)
			if(rear==front&& rear!=0)
			{
				cout<<"queue filled"<<endl;
			}
			
			else
			{
			if(rear==m)
			{
				rear=0;
			}
			arr[rear]=o;
			rear++;
		}
		}
		void deque()
		{
			arr[front]=0;
			front++;

			
		}
		t topque()
		{
			return arr[front];
		}
		int siz()
		{
			size=rear-front;
			return size;
		}
		void show()
		{
			for(int y=front;y<=rear;y++)
			cout<<arr[y]<<"\t";
			cout<<"\n";
		}
};
int main()
{
	
int n=5;
	que<int,8> queu;
	queu.enque(1);
	queu.enque(2);
	queu.enque(3);
	queu.enque(4);
	queu.enque(5);
	cout<<queu.siz()<<endl;
	queu.deque();
	queu.deque();
	queu.show();
}
