#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int userChoice;
    cout << "Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ";
    cin >> userChoice;

    // Validate input
    if (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice! Please choose 0, 1, or 2." << endl;
        return 1; // Exit if input is invalid
    }

    int computerChoice = rand() % 3; // Computer's choice
    cout << "Computer chose: " << computerChoice << endl;

    // Determine the winner
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0; // Successful completion
}
