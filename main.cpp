#include "functions.cpp"
#include "functions.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  const std::string secondArg = argv[1];

  std::string command = makeCommand(argc, secondArg);
  system(command.c_str());

  std::cout << std::endl;
  std::cout << "Execution file created!" << std::endl;
  return 0;
}
