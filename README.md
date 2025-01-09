# NumberGuessingGame
A simple CLI application. This application is solution for the number guessing game pet-project from site: https://roadmap.sh/projects/number-guessing-game

## Introduction
---------------

Welcome to the NumberGuessingGame!

## How to Compile and Run
1. **Clone the Repository:**

   ```bash
   git clone https://github.com/Faylek/NumberGuessingGame.git
2. **Install Cmake:**
   for example on mac os:
   ```bash
   brew install cmake
3. **Creating the Folder Build**

   ```bash
   mkdir build
   cd build
4. **Building this application**

   ```bash
   cmake ..
   make
5. **Run the Game**

   ```bash
   ./NumberGuessingGame
## How to Play
1. You will be presented with a welcome message and a prompt to select the difficulty level.
2. Choose the difficulty level by entering 1 for Easy, 2 for Medium, 3 for Hard, or other keys to Exit.
3. Once you've selected the difficulty level, you will be prompted to enter your guess.
4. Enter a number between 1 and 100.
5. If your guess is incorrect, you will receive a hint indicating whether the correct number is higher or lower than your guess.
6. Keep guessing until you correctly guess the number or run out of attempts.

## Difficulty Levels
---------------------

* **Easy**: 10 attempts to guess the correct number.
* **Medium**: 5 attempts to guess the correct number.
* **Hard**: 3 attempts to guess the correct number.
