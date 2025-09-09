// console.cpp : Source file for your target.
//

#include "console.h"

string uppercase(string word)
{
	for (char& c : word)
	{
		toupper(c);
	}
	return word;
}
void print_game_info(int mistakes, int max_mistakes, std::vector<char> wrong_letters, string clue)
{
	cout << "Mistakes: " << mistakes << "/" << max_mistakes << "\n";
	cout << "Clue: " << clue << "\n";
	if (wrong_letters.size() > 0)
	{
		cout << "Wrong: ";
		for (char c : wrong_letters)
		{
			cout << c;
		}
		cout << "\n\n"
	}
	else
	{
		cout << "\n";
	}
}
void clue_update(string& clue, string answer, char guess, int correct_guess_index, std::vector<char> wrong_letters)
{
	for (int i = 0; i < answer.size(); ++i)
	{
		correct_guess_index = answer.find(guess);
		if (correct_guess_index != string::npos)
		{
			if (guess == answer[correct_guess_index])
			{
				clue += guess;
			}
		}
		else
		{
			wrong_letters.push_back(guess);
			clue += '_';
		}
	}
}
void io::print_screen(string word, int mistakes, int max_mistakes, std::vector<char> wrong_letters, char guess)
{
	string answer, clue;
	int correct_guess_index = 0;
	for (int i = 0; i < word.size(); ++i)
	{
		answer += '_';
	}
	clue.resize(word.size(), '_');

	cout << "Hangman\n" << answer << "\n\n";

	print_game_info(mistakes, max_mistakes, wrong_letters, clue);
}

template<typename T>
T io::get_input()
{
	T guess;
	cin >> guess;
	return guess;
}

void io::print_end(bool win, string word)
{
	if (win)
	{
		cout << "You won!\n";
		cout << "Your word was: " << uppercase(word) << "\n";
	}
	else
	{
		cout << "You lost.\n";
		cout << "The word was: " << uppercase(word) << "\n";
	}
}