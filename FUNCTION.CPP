#include<iostream.h>
#include<conio.h>
class demo
{
 int x;
public:
 demo()
{
    cout<<"default constructor";
}
demo(int a)
{
 x=a;
   cout<<"constructor with one parameter "<<x<<endl;
   cout<<"square of a:->"<<x*x<<endl;
}
demo(int a,int b)
{
   cout<<"constructor with 2 parameter "<<a<<"\t"<<b<<endl;
   cout<<"result of a+b=>"<<a+b<<endl;
}
demo(demo&d)
{
   cout<<"copy constructor"<<endl;
  x=d.x;
  cout<<"copied value=>"<<x;
  }
};
void main()
{
 clrscr();
   demo d1;
   demo d2(10);
   demo d3(20,30);
   demo d4(d2);
getch();
}


