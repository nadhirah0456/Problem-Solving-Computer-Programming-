#include <iostream>
using namespace std;

int sum(int i1, int i2){
    int sum=0;
    for (int i = i1; i <= i2; i++){
        sum += i;
    }
    return sum;
}

int mult(int i1, int i2){
    int multiply;
    multiply = i1*i2;
    return multiply;
}

double average (int i1, int i2){
    double purata;
    purata = (i1+i2)/2.0;
    return purata;
}


int main()
{
    cout<<"Sum from 1 to 10 is "<<sum(1,10)<<endl;
    cout<<"Multiplication 2 and 5  is "<<mult(2,5)<<endl;
    cout<<"Average of 2 and 3 is "<<average(2,3)<<endl;
    return 0;
}

