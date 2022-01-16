#include <iostream>
#include <math.h>
#define SIZE(x) sizeof(x) * 8
using namespace std;

// function to find the range of signed data types
void signedRange(int count)
{
    int min = pow(2, count - 1);
    int max = pow(2, count - 1) - 1;
    cout << min * (-1) << " to " << max << endl;
}

// function to find the range of unsigned data types
void unsignedRange(int count)
{
    unsigned int max = pow(2, count) - 1;
    // Minimum value of all unsigned data type is 0
    cout << "0 to " << max << endl;
}

int main()
{
    cout << "Range of signed char: ";
    signedRange(SIZE(signed char));

    cout << "Range of Unsigned char: ";
    unsignedRange(SIZE(unsigned char));

    cout << "Range of signed short int: ";
    signedRange(SIZE(signed short int));

    cout << "Range of unsigned int: ";
    unsignedRange(SIZE(unsigned int));

    return 0;
}