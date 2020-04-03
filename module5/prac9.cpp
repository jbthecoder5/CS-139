#include <iostream>
#include <fstream>

using namespace std;

int main() {
    cin.get();


    ofstream outputFile;
    outputFile.open("demofile.txt");

    cout << "Now writing data to the file.\n";

    // write four names to the file.

    outputFile << "Bach" << endl;
    outputFile << "Beethoven" << endl;
    outputFile << "Joseph\n";
    outputFile << "jenny\n";

    outputFile.close();
    
    cout << "Done.\n";
    return 0;
}