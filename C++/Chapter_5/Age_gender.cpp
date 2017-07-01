#include <iostream>
using namespace std;

main()
{
    int age;
    char gender;

    cout << "Are you a male or a female (m/f):";
    cin >> gender;
    cout << "Your age:";
    cin >> age;

    switch(gender)
    {
        case 'm': case 'M':
        {
            if (age <=55)
                cout << "You are a man in his prime!" << endl;
            
            else if (age >= 56 && age <= 100)
                cout << "You are a wise man!" << endl;
            else
                cout << "Error encountered!" << endl;
            break;
        }
        case 'f': case 'F':
        {
            if (age <=55)
                cout << "You are like a blooming flower!" << endl;
            
            else if (age >= 56 && age <= 100)
                cout << "You look young for your age!" << endl;
            else
                cout << "Error encountered!" << endl;
            break;
        }
        default:
           cout << "Error encountered!" << endl;
        
    }
}