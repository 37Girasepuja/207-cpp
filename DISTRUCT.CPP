#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x;
	public:
	demo()
	{
		cout<<"\n\t the constructor with no parameter ";
	}
	demo (int a)
	{
		x=a;
		cout<<"\n\t the constructor with one parameter x="<<x;
		cout<<"\n\t the square of x is "<<x*x;
	}
	demo(demo&d)
	{
		cout<<"\n\t the copy constructor is x=d.x="<<d.x;
		x=d.x;
		cout<<"\n\t the copied constructor is"<<x;

	}
	~demo()
	{
		cout<<"destructor is invoke\n";
	}
};
void main()
{
	clrscr();
	demo d1;
	demo d2(10);
	demo d5(d2);
	getch();
}