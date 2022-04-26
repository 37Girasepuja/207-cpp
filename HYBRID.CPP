#include<iostream.h>
#include<conio.h>
class stud
{
   private:
	   int rollno;
	   char name[20];
   public:
	  void get();
	  void display();

};
void stud::get()
{
   cout<<"Enter Roll no = ";
   cin>>rollno;
   cout<<"Enter Name = ";
   cin>>name;
   cout<<"endl";
}
void stud::display()
{
   cout<<"Roll no :"<<rollno<<endl;
   cout<<"name :"<<name<<endl;
   cout<<endl;

};
class mark:public stud
{
   protected:
	      int m,m1;
   public:
	      void get();
	      void display();

};
void mark::get()
{
   stud::get();
   cout<<"Enter mark first subc:";
   cin>>m;
   cout<<"Enter mark second subc:";
   cin>>m1;
   cout<<endl;
}

void mark::display()
{
   stud::display();
   cout<<"mark first subject";
   cout<<"mark second subject";
   cout<<endl;
}
class info
{
  private:
    int age;
    char add[40];

  public:
	void get();
	void display();
};

void info::get()
{
  cout<<"Enter age";
  cin>>age;
  cout<<"Enter address";
  cin>>add;
  cout<<endl;

}
void info::display()
{

 cout<<"age:"<<age<<endl;
 cout<<"address:"<<add<<endl;
 cout<<endl;
}
class result:public mark,public info
{
     private:
	     int total;
     public:
	     void get();
	     void display();

};
void result::get()
{
   mark::get();
   info::get();
   total=m+m1;

}
void result::display()
{
mark::display();
info::display();
cout<<"Total of three subject:"<<total<<endl;
}

void main()
 {
    clrscr();

    result s;
    s.get();
    s.display();
    getch();

}