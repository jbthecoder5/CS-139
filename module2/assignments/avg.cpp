// Joseph Bourne
/* This program will receive 5 numerical inputs from the
the user, and will then calculate the average of those 
numbers
*/

#include <iostream>
using namespace std;

int main()
{
    cin.get();

    int num1,
        num2,
        num3,
        num4,
        num5,
        average;

    // receiving input for number 1
    cout << "Please enter an integer value for item 1\t";
    cin >> num1;

    // receiving input for number 2
    cout << "Please enter an integer value for item 2\t";
    cin >> num2;

    // receiving input for number 3
    cout << "Please enter an integer value for item 3\t";
    cin >> num3;

    // receiving input for number 4
    cout << "Please enter an integer value for item 4\t";
    cin >> num4;

    // receiving input for number 5
    cout << "Please enter an integer value for item 5\t";
    cin >> num5;

    // outputing the averge of the 5 numbers
    average = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "The average of the 5 numbers you entered is: "
         << average << endl;

    return 0;
}