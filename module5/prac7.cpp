#include <iostream>
using namespace std;

int main() {
    cin.get();

    const int MIN_NUMBER = 1, 
            MAX_NUMBER = 10;
    int num;

    cout << "Number Number Squared\n";
    cout << "----------------------\n";

    for(num = 0; num <= MAX_NUMBER; num++) {
        cout << num << "\t\t" << (num * num) << endl;
    }

    return 0;
}]


int testLoop() {
    for(int test = 0; test < 10; test++) {
        cout << "the value for test is: " << test << endl;
    }