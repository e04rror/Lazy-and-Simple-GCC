#include <iostream>  
#include <string>
#include "functions.cpp"
#include "functions.hpp"


int main(int argc, char* argv[]) {
  const std::string secondArg = argv[1];

  std::string command = makeCommandFunction(argc, secondArg);
  std::cout<<"Command: "<<command<<std::endl;

 return 0;
}
