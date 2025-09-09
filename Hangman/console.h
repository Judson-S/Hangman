// console.h : Header file for your target.

#pragma once
#include <iostream>
#include <vector>
#include <string>



namespace io {
	void print_screen(std::string word, int mistakes, int max_mistakes, std::vector<char> wrong_letters, char guess);
	char get_input();
	void print_end(bool win, std::string word);
}