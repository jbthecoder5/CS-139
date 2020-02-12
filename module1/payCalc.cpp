#include <iostream>

using namespace std;

// main function for c++ program

int main()
{
    double hours, rate, pay;

    // get the number of hours the employee worked
    cout << "How many hours did you work? ";
    cin >> hours;

    // get the hourly pay rate of the employee
    cout << "How much do you make per hour? ";
    cin >> rate;

    // calculate the employees paycheck
    pay = hours * rate;
    cout << "Based off information, you made the following: $" << pay << endl;
}