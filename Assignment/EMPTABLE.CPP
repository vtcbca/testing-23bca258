#include<iostream.h>
#include<conio.h>
class employee
{
	int eid;
	char ename[10],dept[10];
	float salary;
	public:
	employee()
	{
		clrscr();
		cout<<"Enter Employee id:";
		cin>>eid;
		cout<<"Enter Employee ename:";
		cin>>ename;
		cout<<"Enter Employee dept:";
		cin>>dept;
		cout<<"Enter Employee salary:";
		cin>>salary;
		cout<<"id:"<<eid<<"\n name:"<<ename<<"\n department:"<<dept<<"\n salary:"<<salary;
	}
};
void main()
{
	employee e1;
	employee e2;
	employee e3;
	employee e4;
	employee e5;
	clrscr();
	getch();
}
