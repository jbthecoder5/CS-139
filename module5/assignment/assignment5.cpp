// Joseph Bourne
/* This program will find how many rooms on are each hotel floor, and calculate
   how many are occupied and unoccupied.
*/
#include <iostream>
using namespace std;

int main() {
    cin.get();

    int floors;
    int rooms;
    int counter = 0;
    int occupied;
    int unoccupied;
    int availRoom;

    cout << "How many floors does the hotel have? ";
    cin >> floors;

    for(int i = 0; i < floors; i++) {

            cout << "How many rooms does this floor have?\n";
            cin >> rooms;

            cout << "How many not occupied?\n";
            cin >> unoccupied;

            if (rooms < 1) {
                cout << "Please enter how many rooms this floor has, must be greater than 1 ";
                cin >> rooms;

            }

            else if (unoccupied < rooms)
            {
                availRoom = rooms - unoccupied;
                int perc = rooms % availRoom; // perentage of rooms occupied

                cout << "The available amount of rooms for floor " << 
                floors << ", is: " << availRoom << endl;
                cout << "Which is " << perc << "%." << endl;


            }
 
    }
    

    return 0;
}