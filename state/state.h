// Hangman.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <iostream>
#include <vector>
#include <string>

namespace Hangman {
	
	class State {
		std::string answer;
		int mistakes, max_mistakes;
		std::vector<char> wrong_letters;
		enum class Difficulty {
			EASY, MEDIUM, HARD
		};
		Difficulty difficulty;
		
		std::string get_answer();
		int get_mistakes();
		std::vector<char> get_wrong_letters();
		int get_difficulty();

		void set_answer(std::string word);
		void set_difficulty(int diff_num);
	};
	
}
