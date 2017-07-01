#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int calc;
    int x;
    int y;
    double z;

    cout << "Choose desired calculation:\n1: subtraction\n2: addition\n3: multiplication\n4: division\n5: remainder\nChoose a calculation:" << endl;
    cin >> calc;
    cout << "Input first number:";
    cin >> x;
    cout << "Input second number:";
    cin >> y;

    switch(calc)
    {
        case 1:
            z = x - y;
            cout << x << "-" << y << " = " << z << endl;
            break;
        case 2:
            z = x + y;
            cout << x << "+" << y << " = " << z << endl;
            break;
        case 3:
            z = x * y;
            cout << x << "*" << y << " = " << z << endl;
            break;
        case 4:
            z = x / y;
            cout << x << "/" << y << " = " << z << endl;
            break;
        case 5:
            z = x % y;
            cout << x << "%" << y << " = " << z << endl;
            break;
        default:
            break;
    }
}