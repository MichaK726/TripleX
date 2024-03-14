#include <iostream>
using namespace std;

void PrintIntroduction()
{
    cout << "You are a secret agent breaking into a secure server room..." << endl;
    cout << "Enter the correct code to continue..." << endl;
}

void PlayGame()
{
    PrintIntroduction();

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

    // Store player guess
    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the players guess is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "You win!";
    }
    else
    {
        cout << "You lose!";
    }
}

int main()
{
    PlayGame();
    return 0;
}
