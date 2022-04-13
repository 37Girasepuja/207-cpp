//program to demonstrates default,copy & parameterise
#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int x,y;
	public:
		demo();
		demo(int a,int b);
		demo(demo &q);
		~demo();
		void show();

};

demo::demo()
{
	cout<<"Constructor called"<<endl;
};
demo::~demo()
{
	cout<<"desctrutor called "<<endl;

}
demo::demo(demo &q)
{
	x=q.x;
	y=q.y;
}
void demo::show()
{
	cout<<"value of a is =>"<<x<<endl;
	cout<<"value of b i s =>"<<y<<endl;
}
demo::demo(int a , int b)
{
	x=a;
	y=b;
}
void main()
{
	clrscr();

	demo d;
	demo d1(10,20);
	demo w(d1);
	d1.show();
	w.show();

	getch();
}
