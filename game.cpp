#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int target = rand() % 101; 
    int guess;
    int attempts = 0;

    
    cout << "choose a number between 0 and 100." << endl;

    while (true) {
        cout << "\nEnter your guess: ";
        cin >> guess;

        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Please enter a valid number!" << endl;
            continue;
        }

        attempts++;

        if (guess == target) {
            cout << "\n Congratulations!" << endl;
            cout << "You guessed the correct number: " << target << endl;
            cout << "Total attempts: " << attempts << endl;
            break;
        }
        else if (guess < target) {
            cout << "Too low  Try a bigger number." << endl;
        }
        else {
            cout << "Too high  Try a smaller number." << endl;
        }
    }

    return 0;
}