#include <iostream>
using namespace std;
int main()
{
	int month_num;
	
	cout<<"Please enter a month number: ";
	cin>>month_num;
	
	if(month_num >= 1 && month_num <=12)
	{
		cout<<"\nValid Month";
	}
	else
	{
		cout<<"\nInvalid Month";
	}
	return 0;
}
