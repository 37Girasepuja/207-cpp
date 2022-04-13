#include<iostream.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	cout<<"enter the number to find even or odd:";
	cin>>x;
	if(x%2==0)
	{
		goto even;

	}
	else
	{
		goto odd;
	}
	even:cout<<"the even no is:"<<x;
	getch();
	return;
	odd:cout<<"the odd no is:"<<x;
	getch();



}