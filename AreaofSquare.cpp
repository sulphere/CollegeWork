#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    // Declare Variables
    float length, area;

    cout << "Simple C++ Program : Area Of Square\n";
    cout << "\nEnter the Length of Square : ";
    cin >> length;

    area = length * length;
    cout << "\nArea of Square : " << area;

    return (0);
}