#include <iostream>
using namespace std;

void drawRoof()                     //bumbung
{                           
    cout<<"        .        \n";
    cout<<"       / \\      \n";
    cout<<"      /   \\     \n";    
    cout<<"     /     \\    \n";
    cout<<"    /       \\   \n";
    cout<<"   /         \\  \n";
    cout<<"  /           \\ \n";
    cout<<" /             \\\n";
}    
void drawUFloor()                   //tingkat atas
{
    cout<<"-----------------\n";
    cout<<"|    -------    |\n";
    cout<<"|    |     |    |\n";
    cout<<"|    |     |    |\n";
    cout<<"|    -------    |\n";
    cout<<"|               |\n";
    
}
void drawGFloor()                   //lantai bawah
{
    cout<<"-----------------\n";
    cout<<"|               |\n";
    cout<<"|    -------    |\n";
    cout<<"|    |     |    |\n";
    cout<<"|    |     |    |\n";
    cout<<"|    |     |    |\n";
    cout<<"=================\n";
}

int main()
{
    int level;
    
    cout<<"Enter the number of levels of the house: ";
    cin>>level;
    
    drawRoof();
    
    for(int i=1;i<level;i++)
    {
        drawUFloor();
    }
    
    drawGFloor();

    return 0;
}


