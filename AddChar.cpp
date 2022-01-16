#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Laiba";
    string lastName = "Yousaf";
    string fullName = firstName.append(lastName);
    cout << fullName;
    return 0;
}