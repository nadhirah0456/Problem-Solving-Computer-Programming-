#include <iostream> 
#include <ctime> 
using namespace std; 
int main()
{

    int randNum, guess; 
    
    srand((unsigned) time(0)); 
    randNum= (rand() % 101);
    
    //cout<<randNum;
    cout<<"Guess a magic number between 0 to 100 "; guess=-1;
    
    while(guess !=randNum)
    { 
        cin>>guess; 
        if(guess>randNum)
            cout<<"Your guess is too high."; 
        if(guess<randNum)
            cout<<"Your guess is too low.";
    }//while
    
    cout<<"Yes, the number is "<<randNum; return 0;
    
    }

