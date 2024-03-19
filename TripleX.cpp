#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction(int Difficulty)
{
    cout << "\n\nYou are a bomb squad technician disarming a level " << Difficulty;
    cout << " bomb...\nEnter the correct code to break a layer of protection...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // Print CodeSum and CodeProduct to the terminal
    cout << "There are 3 numbers in the code \n";
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
        cout << "\n*** Well done agent! You are one step closer to defusing this bomb! Keep going! ***";
        return true;
    }
    else
    {
        cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day

    int LevelDifficulty = 1;
    int const MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear();  // Clears any errors related to input
        cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }

    cout << "\n*** Great work agent! You have defused the bomb! ***";

    return 0;
}
