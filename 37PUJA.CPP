//program to demonstrate friend function
#include<iostream.h>
#include<conio.h>

class two;

class one
 {
	int a;
public:
void seta(int x)
 {
	a=x;
 }
};

class two
 {
	int b;
public:
void setB(int x)
 {
      b=x;
 }
};
int add (one p,two q)
{
 return p.a+q.b;
}

void main()
{
	clrscr();
		int,sum,a,b;
		one obj1;
			cout<<"\nenter the value of A:";
			cin>>a;
			obj1.setA(a);
		Two obj2;
			cout<<"enter the value of B:";
			cin>>b;
			onj2.setB(b);
	 sum=add(obj1,obj2);
	 cout<<"\naddition of A+B:"<<sum;
  getch();
}



