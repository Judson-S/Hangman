// console.h : Header file for your target.

#pragma once
#include <iostream>
#include <vector>
#include <string>

using std::cout, std::cin, std::string;

namespace io {
	void print_screen(string word, int mistakes, int max_mistakes, std::vector<char> wrong_letters, char guess);
	char get_input();
}