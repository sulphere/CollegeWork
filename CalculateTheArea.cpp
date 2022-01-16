#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    const float PI = 3.14;
    float area, circumference, radius;
    cout << "Input radius of spehere: ";
    cin >> radius;
    area = 4 * PI * pow(radius, 2);
    circumference = (4 / 3) * PI * pow(radius, 3);
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    return 0;
}