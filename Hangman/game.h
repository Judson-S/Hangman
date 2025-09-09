// game.h : Header file for your target.

#pragma once

#include "console.cpp"
#include "state.cpp"
#include <cctype>

namespace Hangman {
	void start_game();
	bool is_win(int guesses, int max_guesses);
}