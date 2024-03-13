#include <iostream>
using namespace std;

int main()
{
    // Print welcome messages to the terminal
    cout << "You are a secret agent breaking into a secure server room..." << endl;
    cout << "Enter the correct code to continue..." << endl;

    // Declare 3 number code
    const int CodeA = 4;
    const int CodeB = 3;
    const int CodeC = 2;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    cout << endl;
    cout << "There are 3 numbers in the code" << endl;
    cout << "The codes add up to: " << CodeSum << endl;
    cout << "The numbers multiply to: " << CodeProduct << endl;

    int PlayerGuess;

    return 0;
}