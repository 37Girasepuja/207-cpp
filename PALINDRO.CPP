#include<iostream.h>
#include<conio.h>
class palindrome
{
	private:
		int p,m,n,sum;
	public:
		void get();
		void cal();
		void put();
};
	void palindrome::cal();
{
	cout<<"\n enter the number:\t";
	cin>>n;
}
	void arm palindrome::cal();
{
	sum=0;
	p=n;
	while(n!=0)
{
	m=n%10;
	sum=sum+m*m*m;
	n=n/10
	}
}
	void palindrome::put()
{
	if(p==sum)
{
	cout<<"the number is palindrome:"<<p;
}
	else
{
	cout<<"the number is not palindrome:"<<p;
  }
}
	void main()
	{
	clrscr();
	palindrome p1;
	p1.get();
	p1.cal();
	getch();
}



