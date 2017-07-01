#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float grade;
    int i = 0;
    float x = 0;
    int y = 1;
    float z;
    
    cout << "Program calculates the test grade average." << endl;
    cout << "Finish inputting with a negative number." << endl;
   
   do {
    cout << "Input grade (4-10) ";
    cin >> grade;
    if (grade >=4 && grade <=10){
        x = x + grade;
        i++;
    }
    if (grade >= 0 && grade < 4 | grade > 10){
        continue;
    }
    if (grade < 0){
        y = 2;
    }
   } while (y != 2);

   z = x / i;
   cout << "You inputted " << i << " grades." << endl;
   cout << "Grade average: " << z << endl;
}