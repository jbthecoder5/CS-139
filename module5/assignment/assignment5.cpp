// Joseph Bourne
/* This program will receive input from users about the amount of coins they have.
    Then it will find how many dimes, quarters, pennies, or nickels they have.
*/
#include <iostream>
using namespace std;

int main() {
    cin.get();

    int floors;
    int rooms;
    int counter = 0;

    cout << "How many floors does the hotel have? ";
    cin >> floors;

    for(int i = 0; i < floors; i++) {

            cout << "How many rooms does this floor have? ";
            cin >> rooms;
            if (rooms < 1) {
                cout << "Please enter how many rooms this floor has, must be greater than 1 ";
                cin >> rooms;
            }
            counter += 1;
            cout << "Floor " << counter << " has " << rooms << " rooms.\n";
    }
    

    return 0;
}