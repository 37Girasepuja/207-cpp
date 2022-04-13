#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a,b;
	public:
		demo();
		demo(int x, int y);
		demo(demo &q);
		void print();


};
demo::demo()
{ 	cout<<"constructor called"<<endl;
}
demo::demo(int x, int y)
{
	a=x;
	b=y;
}
void demo::print()
{
	cout<<"Value of A is:"<<a<<endl;
	cout<<"Value of B is:"<<b<<endl;
}
demo::demo(demo &q)
{
	a=q.a;
	b=q.b;
}
void main()
{
	clrscr();
	demo w;
	demo d(10,20); //copy constructor calling function
	d.print();
	demo d1(d);
	d1.print();
	getch();
}
