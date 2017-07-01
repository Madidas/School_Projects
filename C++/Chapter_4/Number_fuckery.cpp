#include <iostream>
using namespace std;

main()
{
    int number_1, number_2;
    double sum, difference, product, remain;

    cout << "Input first integer:";
    cin >> number_1;
    cout << "Input second integer:";
    cin >> number_2;

    sum = number_1 + number_2;
    difference = number_1 - number_2;
    product = number_1 * number_2;
    remain = number_1 % number_2;

    cout << number_1 << "+" << number_2 << " = " << sum << endl;
    cout << number_1 << "-" << number_2 << " = " << difference << endl;
    cout << number_1 << "*" << number_2 << " = " << product << endl;
    cout << "Remainder: " << remain << endl;
}