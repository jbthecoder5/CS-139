#include <iostream>
using namespace std;

// Function Prototype
void displayValue(int);

int main() {
    cin.get();
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);
    cout << "Now I am back in main.\n";
    return 0;
}

void displayValue(int num)
{
    cout << "The value is " << num << endl;
}