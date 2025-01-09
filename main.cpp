#include <iostream>
#include "game.h"
using namespace std;

int main(){
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << endl;
    cout << "Please select the difficulty level:" << endl;
    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (5 chances)" << endl;
    cout << "3. Hard (3 chances)" << endl;
    cout << "Tap any key to exit." << endl;
    cout << endl;
    startGame();
    return 0;
}