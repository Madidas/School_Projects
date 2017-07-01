#include <iostream>
using namespace std;

int main()
{
	int number, number2;

	cout << "Input an integer: ";
	cin >> number;

	number2 = number;
	cout << "Value of the variable " << number << " and value of the " 
		<< " variable number2 is " << number2 << endl;
	
	/* note the usage of ++ operator */
	cout << "Values now:" << endl;
	cout << "number == " << ++number;
	cout << " and number2 == " << number2++ << endl;

	cout << "and now number == " << number << " and number2 == " << number2 << endl;

	return 0;
}
