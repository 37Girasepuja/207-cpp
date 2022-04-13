#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	cout<<"enter a number";
	cin>>no;
	for(i=1; i<=no; i++)
	{
		for(j=1; j<=10; j++)
		{
			cout<<i*j<<" "<<"\t";

		}
		cout<<" ";
	}

	getch();

}