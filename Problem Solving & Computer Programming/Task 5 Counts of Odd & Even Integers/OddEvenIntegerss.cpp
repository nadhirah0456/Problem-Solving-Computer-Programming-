#include <iostream>
using namespace std;

int main()
{
    int N, bilGenap=0, bilGanjil=0;
    
    cout<<"Sila masukkan 5 nombor: ";
    cin>>N;
    
    if (N%2==0)
    {
        bilGenap=bilGenap+1;
    }
    else if (N%2!=0)
    {
        bilGanjil=bilGanjil+1;
    }
    
    cin>>N;
    
    if (N%2==0)
    {
        bilGenap=bilGenap+1;
    }
    else if (N%2!=0)
    {
        bilGanjil=bilGanjil+1;
    }
    
    cin>>N;
    
    if (N%2==0)
    {
        bilGenap=bilGenap+1;
    }
    else if (N%2!=0)
    {
        bilGanjil=bilGanjil+1;
    }
    
    cin>>N;
    
    if (N%2==0)
    {
        bilGenap=bilGenap+1;
    }
    else if (N%2!=0)
    {
        bilGanjil=bilGanjil+1;
    }
    
    cin>>N;
    
    if (N%2==0)
    {
        bilGenap=bilGenap+1;
    }
    else if (N%2!=0)
    {
        bilGanjil=bilGanjil+1;
    }
    
        cout<<"\nBilangan Nombor Genap: "<<bilGenap;
        cout<<"\nBilangan Nombor Ganjil: "<<bilGanjil;
        
        return 0;
    
}

