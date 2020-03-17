

#include <iostream> // for the cout and cin object
#include <cstdlib> // for the rand and srand function
#include <iomanip> // for the setprecision function

using namespace std;

int main() {
    cin.get();

    const int MIN = 1; 
    const int MAX = 10; 

    int firstNum, secondNum; // holds the value for the first and second random generated numbers to be used.

    firstNum = (rand() % (MAX - MIN + 1)) + MIN;
    secondNum = (rand() % (MAX - MIN + 1)) + MIN;

    double newNum1 = static_cast<double>(firstNum);
    double newNum2 = static_cast<double>(secondNum);

    cout << setprecision(2) << fixed;

    cout << "Random number 1 and 2 added results are: " << newNum1 + newNum2 << endl;
    cout << "Random number 1 and 2 difference results are: " << newNum1 - newNum2 << endl;
    cout << "Random number 1 and 2 multiplied results are: " << newNum1 * newNum2 << endl;
    cout << "Random number 1 divided by results the following quotient: " << newNum1 / newNum2 << endl;


    return 0;
}