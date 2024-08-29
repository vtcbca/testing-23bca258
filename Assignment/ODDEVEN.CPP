#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	cout<<"Enter Any Number :";
	cin>>a;
	if(a%2==0)
	{
		cout<<" Number is even";
	}
	else if(a==0)
	{
		cout<<" Enter any other Number";
	}
	else
	{
		cout<<" Number is odd";
	}
	getch();
}