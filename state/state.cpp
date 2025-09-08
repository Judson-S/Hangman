// Hangman.cpp : Defines the entry point for the application.
//

#include "state.h"

std::string Hangman::State::get_answer()
{
	return answer;
}

int Hangman::State::get_mistakes()
{
	return mistakes;
}

std::vector<char> Hangman::State::get_wrong_letters()
{
	return wrong_letters;
}

void Hangman::State::set_answer(std::string word)
{
	answer = word;
}
void Hangman::State::set_difficulty(int difficulty_num)
{
	if (difficulty_num == 0)
	{
		difficulty = Difficulty::EASY;
	}
	else if (difficulty_num == 1)
	{
		difficulty = Difficulty::MEDIUM;
	}
	else 
	{
		difficulty = Difficulty::HARD;
	}


}

