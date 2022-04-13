//program to demonstrate function overloading
#include<iostream.h>
#include<conio.h>
void print(int i)
{
	cout<<"here is int"<<endl;
}
void print(double f)
{
	cout<<"here is float"<<endl;
}
void print(char const*c)
{
	cout<<"here is char*"<<c<<endl;
}
int main()
{
clrscr();
  print(10);
  print(10.10);
  print("ten");
  return 0;
  getch();
}