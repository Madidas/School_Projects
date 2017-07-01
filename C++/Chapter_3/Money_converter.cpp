#include <iostream>
using namespace std;

main()
{
    double dollar;
    double euro;
    double converter = 0.727802;

    cout << "How much dollars do you want to exchange:";
    cin >> dollar;
    euro = dollar * converter;
    cout << "Amount in euros: " << euro << endl;
}