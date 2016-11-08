#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
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
	std::cout << std::endl << "Welcome to Bulls and Cows, a fun word game.\n\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n\n";
	return;
}

void PlayGame()
{
	//loop guesses for the MAX times
	constexpr int MAX = 5;
	for (int count = 1; count <= MAX; count++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your answer is " << Guess << std::endl << std::endl;
	}
	std::cout << std::endl;
}

std::string GetGuess()
{
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again (y/n)? ";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');
}


