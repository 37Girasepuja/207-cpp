//program to demonstrate array of object
#include<iostream.h>
#include<conio.h>
class student
{
private:
	int rollno;
	char name;
public:
	void get();
	void put();
};
void student::get()
{
  cout<<"enter rollno:-";
  cin>>rollno;

  cout<<"enter name:-";
  cin>>name;
}
void student::put()
{
cout<<"*******************output**********";
	   cout<<endl;
 cout<<"rollno:-"<<rollno<<endl;
 cout<<"name:-"<< name<<endl;
}
void main()
{
int i;
clrscr();

student s[5];

for(i=0;i<5;i++)
{
s[i].get();
}
for(i=0;i<5;i++)
{
s[i].put();
}
getch();

}