#include <iostream>
#include <string>


using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

//the entry point for application
int main()
{
	bool bPlayAgain = false;
	do
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);
	return 0;
}



//introduce the game
void PrintIntro()
{
	constexpr int WORD_LENGTH = 4;
	cout << endl << "Welcome to Bulls and Cows, a fun word game.\n\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n\n";
	return;
}

void PlayGame()
{
	//loop guesses for the MAX times
	constexpr int MAX = 5;
	for (int count = 1; count <= MAX; count++)
	{
		string Guess = GetGuess();
		cout << "Your answer is " << Guess << endl << endl;
	}
	cout << endl;
}

string GetGuess()
{
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again (y/n)? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}


