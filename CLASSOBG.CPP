//print information using class and obgect
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int rollno;
	char name[20]; //datamembers

	void display()
	{

		cout<<"Inside class";

	}
};
void  main()
{
      student s;
      clrscr();
      cout<<"Enter Roll no"<<endl;
      cin>>s.rollno;
      cout<<"Enter student Name"<<endl;
      cin>>s.name;
      cout<<s.rollno<<endl;
      cout<<s.name;
      getch();
}