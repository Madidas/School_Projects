#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int leg_1, leg_2;
    double hypotenuse;
    
    cout << "Input first triangle leg:";
    cin >> leg_1;
    cout << "Input second triangle leg:";
    cin >> leg_2;

    hypotenuse = sqrt(leg_1*leg_1 + leg_2*leg_2);

    cout << "Hypotenuse length: " << hypotenuse << endl;
}