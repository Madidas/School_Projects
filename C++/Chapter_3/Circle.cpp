#include <iostream>
using namespace std;

main()
{
    double radius;
    double pi = 3.142;
    double area;

    cout << "Input circle radius: ";
    cin >> radius;

    area = pi * (radius*radius);
    cout << "Circle area with the given radius: " << area << endl;
}