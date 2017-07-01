#include <iostream>
#include <cmath>
using namespace std;

main()
{
    unsigned int number;
    unsigned long long int x = 1;
    int i;

    cout << "Input an integer:";
    cin >> number;

    for (i = 1; i <= number; i++)
    {
        x *= i; //Loop does x = x * i until i is the given number. For 3! it means 1*1-> 1*2-> 2*3
    }

    cout << "The factorial of number " << number << " is " << x << endl;
}