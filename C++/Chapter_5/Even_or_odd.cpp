#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int number;

    cout << "Input an integer: ";
    cin >> number;

    if (number % 2 == 0)
        cout << "The number " << number << " is even."  << endl;
    
    else
        cout << "The number " << number << " is odd."  << endl;
}