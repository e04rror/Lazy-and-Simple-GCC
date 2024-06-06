// create function that execute filename that we get
#include <iostream>
#include <cstdlib>
#include "functions.hpp"




std::string makeCommandFunction(char* argv) {
  // Create function that makes g++/gcc command  
}

int main(int argc, char* argv[]) {
  // At first, I want my program take only two arguments(I mean kind like test)
  if(argc == MAX_AMOUNT_OF_ARGUMENTS) {
    std::string commandName = "g++ -std=23" + std::string(argv[1]);
    system(commandName.c_str());
  }
  return 0;
}
