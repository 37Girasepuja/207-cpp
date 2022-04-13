#include<iostream.h>
#include<conio.h>
class emp
{
	private:
	char name[20],dept[40],add[40],gen[7];
	int sal,age;
	public:
	void get();
	void put();
};
void emp::get()
{
	cout<<"Name of employee\n";
	cin>>name;
	cout<<"Name of deparment\n";
	cin>>dept;
	cout<<"Enter the address of employee\n";
	cin>>add;
	cout<<"Salary of employee\n";
	cin>>sal;
	cout<<"Age of employee\n";
	cin>>age;
	cout<<"Enter the gender of employee\n";
	cin>>gen;
	cout<<"\n\n";
}
void emp::put()
{
	cout<<"\nname\t"<<name<<"\nDeparment\t"<<dept<<"\nage\t"<<age<<"\naddress\t"<<add<<"\nSalary\t"<<sal<<"\ngender\t"<<gen;
}
void main()
{
	clrscr();
	int i,no;
	//cout<<"Enter number of employee";
	//cin>>no;
	//emp e[no];
	cout<<"Enter detail of three employee\n";
	emp e[3];
	for(i=0;i<3;i++)
	{
		e[i].get();
		clrscr();
	}
	cout<<"\n\tDetails of employee\n\n";
	for(i=0;i<3;i++)
	{
		e[i].put();
		cout<<"\n";
	}
	getch();
}