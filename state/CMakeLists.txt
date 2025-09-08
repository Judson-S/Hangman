# CMakeList.txt : CMake project for Hangman, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (state "state.cpp" "state.h" , console "console.cpp" "console.h", game "game.cpp" "game.h", main "main.cpp" "main.h")

# TODO: Add tests and install targets if needed.
