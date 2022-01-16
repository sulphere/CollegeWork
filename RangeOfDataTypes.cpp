#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    cout << "char minimum value: " << CHAR_MIN << endl;
    cout << "char maximum value: " << CHAR_MAX << endl;
    cout << "Unsigned char maximum value: " << UCHAR_MAX << endl;
    cout << "Signed char minimum value: " << SCHAR_MIN << endl;
    cout << "Signed char maximum value: " << SCHAR_MAX << endl
         << endl;

    cout << "short int minimum value: " << SHRT_MIN << endl;
    cout << "short int maximum value: " << SHRT_MAX << endl;
    cout << "Unsigned short int maximum value: " << USHRT_MAX << endl
         << endl;

    cout << "int minimum value: " << INT_MIN << endl;
    cout << "int maximum value: " << INT_MAX << endl;
    cout << "Unsigned int maximum value: " << UINT_MAX << endl
         << endl;

    cout << "long int minimum value: " << LONG_MIN << endl;
    cout << "long int maximum value: " << LONG_MAX << endl;
    cout << "Unsigned long int maximum value: " << ULONG_MAX << endl;

    cout << "long long int minimum value: " << LLONG_MIN << endl;
    cout << "long long int maximum value: " << LLONG_MAX << endl;
    cout << "Unsigned long long int maximum value: " << ULLONG_MAX << endl;

    return 0;
}