// this program uses floating point data types.
// joseph bourne
#include <iostream>
using namespace std;

int main()
{
    cin.get();

    float distance;
    double mass;

    distance = 1.495979E11;
    mass = 1.989E30;
    cout << "The Sun is " << distance << " meters away.\n";
    cout << "The Sun\'s mass is " << mass << " kilograms.\n";

    double sum = distance + mass;

    cout << "Sum is " << sum << endl;

    return 0;
}