#include <iostream>
#include <random>
#include "game.h"
using namespace std;

void startGame(){
    while (true){
        int chances;
        int choice = 0; int attempts = 0;
        int ranNum = rand() % 100 + 1;
        int myNum = -1;
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1){
            chances = 10;
            cout << "Great! You have selected the Easy difficulty level." << endl;
        }
        else if (choice == 2){
            chances = 5;
            cout << "Great! You have selected the Medium difficulty level." << endl;
        }
        else if (choice == 3){
            chances = 3;
            cout << "Great! You have selected the Hard difficulty level." << endl;
        }
        else{
            break;
        }
        cout << "Let's start the game!" << endl;
        cout << endl;
        while (attempts != chances){
            cout << "Enter your guess: ";
            cin >> myNum;
            attempts++;
            if (myNum > ranNum){
                cout << "Incorrect! The number is less than " << myNum << "." << endl;
            }
            else if (myNum < ranNum){
                cout << "Incorrect! The number is greater than " << myNum << "." << endl;
            }
            else{
                break;
            }
        }
        if (attempts < chances){
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << endl;
        }
        else{
            cout << "Sorry. You are lose." << endl;
        }
    }
}