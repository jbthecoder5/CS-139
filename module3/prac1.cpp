#include <iostream>

using namespace std;

int main() {
     cin.get();
     int length, width, area;

     cout << "This program calculates the are of a ";
     cout << "rectangle.\n";
     cout << "What is the length of the rectangle? ";
     cin >> length;
     cout << "What is the width of the rectangle? ";
     cin >> width;
     area = length * width;
     cout << "The area of the rectangle is " << area << ".\n";
     return 0;
}