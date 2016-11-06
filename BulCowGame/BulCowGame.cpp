#include <iostream>
#include <string>

//changes 

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

//the entry point for application
int main()
{
	PrintIntro();

	//loop guesses for the MAX times
	constexpr int MAX = 5;
	for (int count = 1; count <= MAX; count++)
		GetGuessAndPrintBack();
	cout << endl;
	return 0;
}

//introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 4;
	cout << "Welcome to Bulls and Cows, a fun word game.\n\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n\n";
	return;
}


string GetGuessAndPrintBack()
{
	//get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);

	//print the guess back
	cout << "Your answer is " << Guess << endl << endl;
	return Guess;
}