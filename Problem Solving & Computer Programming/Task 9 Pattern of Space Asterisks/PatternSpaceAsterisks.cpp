#include <iostream>

using namespace std;

int main() 
{

    // Nested loops to print the pattern
    for (int i = 1; i <= 4; i++) 
    {
        // Print leading spaces for alignment
        for (int j = 1; j <= 4 - i; j++) 
        {
            cout << "  ";
        }
        
        // Print asterisks with spaces in between
        for (int j = 1; j <= i; j++) 
        {
            cout << " *";
        }
        
        cout << endl; // Move to the next line
    }
    
    return 0;
}

