#include<iostream.h>
#include<conio.h>
void swap(int &x,int &y);
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter the two number:\n";
	cin>>a>>b;
	swap(a,b);
	getch();
}
void swap(int &x,int &y)
{
	int a;
	cout<<"\nValue of x & y before swap is \tx="<<x<<"\ty="<<y;
	a=x;
	x=y;
	y=a;
	cout<<"\nValue of x & y after swap is \tx="<<x<<"\ty="<<y;
}