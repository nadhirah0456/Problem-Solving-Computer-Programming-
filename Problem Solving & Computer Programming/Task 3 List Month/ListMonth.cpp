#include <iostream>
using namespace std;
int main()
{
	int month_num;
	
	cout<<"Please enter a month number: ";
	cin>>month_num;
	
	if(month_num == 1)
	{
		cout<<"\nJan";
	}
	else if(month_num == 2)
	{
		cout<<"\nFeb";
	}
	else if(month_num == 3)
	{
		cout<<"\nMar";
	}
	else if(month_num == 4)
	{
		cout<<"\nApr";
	}
	else if(month_num == 5)
	{
		cout<<"\nMay";
	}
	else if(month_num == 6)
	{
		cout<<"\nJun";
	}
	else if(month_num == 7)
	{
		cout<<"\nJul";
	}
	else if(month_num == 8)
	{
		cout<<"\nAug";
	}
	else if(month_num == 9)
	{
		cout<<"\nSep";
	}
	else if(month_num == 10)
	{
		cout<<"\nOct";
	}
	else if(month_num == 11)
	{
		cout<<"\nNov";
	}
	else if(month_num == 12)
	{
		cout<<"\nDec";
	}
	else
	{
		cout<<"\nInvalid input";
	}
	return 0;
}
