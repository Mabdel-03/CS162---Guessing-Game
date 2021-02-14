#include <iostream>

/*
Code Written By Mahmoud Abdelmoneum On 2/14/2021
Code Written To Be A Guessing Game
Computer Generates Random Number From 0-100, User Guesses It
 */

using namespace std;

int main()
{
  srand(time(NULL));
  int guess = 0; //user guess 
  bool keepPlaying = true; //boolean, player wants to keep playing

  while (keepPlaying == true) { //while user wants to keep playing, execute
    int random = rand()%101; //generate random number 0-100
    int guessCount = 0; //Keeps count of number of guesses
    char playAgain = 'y'; //player response to keep playing
    cout << "Hello User! Today We Will Play A Guessing Game!" << endl;
    while(guess != random) { //while guess is incorrect
      cout << "Enter a whole number guess between 0 and 100 (inclusive)" << endl;
      cin >> guess;

      if (guess == random) { //if guess is correct 
	cout << "Correct! Excellent Job!" << endl;
	guessCount++;
	cout << "Guesses:" << guessCount << endl;
      }
      else if (guess > random) { //if guess is higher than answer
	cout << "Your guess is too high! Try again!" << endl;
	guessCount++; 
      }
      else if (guess < random) { //if guess is greater than answer
	cout << "Your guess is too low! Try again" << endl;
	guessCount++;
      }   

    }
    cout << "Do you want to play again? (Answer y or n)" << endl; //ask player to play again
    cin >> playAgain;
    if (playAgain == 'y' || playAgain == 'Y') { //if yes
      keepPlaying = true; //continue while loop
    }
    else if (playAgain == 'n' || playAgain == 'N') { // if no
      cout << "Thank you for playing!" << endl;
      keepPlaying = false; //terminate
    }
  }
  return 0;
      
}
