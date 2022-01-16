#include <iostream>
using namespace std;

int main() 
{   int a;
    char b;
    float c; 
    long int d; 
    bool e; 
    unsigned int j; 
    unsigned long k;
    cout << "Size of int : " << sizeof(a) << " bytes" << endl;
    cout << "Size of char : " << sizeof(b) << " byte" << endl;
    cout << "Size of float : " << sizeof(c) << " bytes" << endl;
    cout << "Size of long int : " << sizeof(d) << " bytes" << endl;
    cout << "Size of bool : " << sizeof(e) << " bytes" << endl;
    cout << "Size of unsigned int : " << sizeof(j) << " bytes" << endl;
    cout << "Size of unsigned long : " << sizeof(k) << " bytes" << endl;
    return 0;
}