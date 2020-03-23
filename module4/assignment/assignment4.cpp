// Joseph Bourne
/* This program will receive input from users about the amount of coins they have.
    Then it will find how many dimes, quarters, pennies, or nickels they have.
*/

#include <iostream>

using namespace std;

int main() {
    cin.get();

    int quarter = 25, dime = 10, nickel = 5, penny = 1; // variables to count how many quarters, dimes, nickels, and pennys a user has
    int cents; // the amount of change a user has

    cout << "Please enter total amount of coins you have on hand: ";
    cin >> cents;
   
    
    int totalQuart = cents / quarter;
    int totalDime = cents / dime;
    int totalNick = cents / nickel;
    int totalPen = cents / penny;

    if (cents % quarter == 0) {

        cout << totalQuart << ": quarters" << endl;
        int totalDime = 0;
        int totalNick = 0;
        int totalPen = 0;
    }
    else if(cents % dime == 0) {
        cout << totalDime << ": dimes" << endl;
        int totalQuart = 0;
        int totalNick = 0;
        int totalPen = 0;
    }
    
    else if(cents % nickel == 0) {
        cout << totalNick << ": Nickels" << endl;
        int totalQuart = 0;
        int totalNick = 0;
        int totalPen = 0;
    }

    else if(cents % penny == 0) {
        cout << totalPen << ": Pennies" << endl;
        int totalQuart = 0;
        int totalNick = 0;
        int totalPen = 0;
    }

    else {
        cout << "yep. didnt work\n";
    }


    return 0;
}