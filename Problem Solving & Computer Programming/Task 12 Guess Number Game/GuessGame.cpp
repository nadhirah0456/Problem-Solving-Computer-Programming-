#include <iostream> 
#include <ctime>
using namespace std; int main()
{


	int randNum, guess, counter1, counter2, counter3, counter4;
	srand((unsigned) time(0));
	randNum= (rand() % 101);
	//cout<<randNum;
	cout<<"Guess a magic number between 0 to 100 ";
	guess=-1;
	while(guess !=randNum)
	{


	cout<<"\nEnter your guess : ";
	cin>>guess;
	if(guess>randNum)
	{
	cout<<"Your guess is too high.";
	counter1++;
	}
	else if(guess<randNum && guess>=0)
	{
	cout<<"Your guess is too low.";
	counter2++;
	}
	else if(guess<0)
	{
 
	cout<<"Invalid! The magic number is between 0 and 100";
	counter4++;
	}
	}//while
	cout<<"Yes, the number is "<<randNum;
	counter3++;
	cout<<"\nYou made "<<counter1+counter2+counter3+counter4<<" valid attempt(s) to guess a magic number, "<<counter2<<" attempt(s) is below a magic number and "<<counter1<<" attempt(s) is above the magic number.";
	return 0;
}

