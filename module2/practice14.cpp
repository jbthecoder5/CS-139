// this program calculates hourly wages, including overtime.
#include <iostream>
using namespace std;

int main()
{
    cin.get();

    double regularWages,
        basePayRate = 18.25,
        regularHours = 40.0,
        overtimeWages,
        overtimePayRate = 27.78,
        overtimeHours = 10,
        totalWages;

    // calc the regular wages
    regularWages = basePayRate * regularHours;

    // calc overtime wages
    overtimeWages = overtimePayRate * overtimeHours;

    // calc total wages
    totalWages = regularWages + overtimeWages;

    // display the total wages
    cout << "Wages for this week are $" << totalWages << endl;

    return 0;
}